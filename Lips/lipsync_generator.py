import os
import json
import re

import pyopenjtalk       # pip install pyopenjtalk
import pronouncing       # pip install pronouncing

#────────────────────────────────
# 日本語用設定
#────────────────────────────────
VJP_VOWEL_INDEX = {
    'a': 0,  # あ
    'i': 1,  # い
    'u': 2,  # う
    'e': 3,  # え
    'o': 4,  # お
    'N': 5   # ん
}
DEFAULT_DUR = 0.1


def build_lipsync_data_jp(text: str, dur: float = DEFAULT_DUR) -> dict:
    """
    日本語テキスト → pyopenjtalk.g2p で音素列 → 母音文字・インデックス抽出
    """
    ph_str = pyopenjtalk.g2p(text, kana=False)
    ph_list = ph_str.split()

    vowels = []
    phonemes = []
    for ph in ph_list:
        last = ph[-1]
        if last not in ('a','i','u','e','o','N','U'):
            continue

        # 'U' は 'u'
        v = 'u' if last == 'U' else last

        # “ou” の長音は前の 'o' を継続
        if v == 'u' and vowels and vowels[-1] == 'o':
            v_char = 'o'
            idx = VJP_VOWEL_INDEX['o']
        else:
            v_char = v
            idx = VJP_VOWEL_INDEX[v_char]

        vowels.append(v_char)
        phonemes.append(idx)

    return {
        "vowels":    vowels,
        "phonemes":  phonemes,
        "durations": [dur] * len(vowels)
    }


#────────────────────────────────
# 英語用設定
#────────────────────────────────
EN_VOWEL_MAP = {
    'AA': 'a', 'AE': 'a', 'AH': 'a',
    'AO': 'o', 'OW': 'o',
    'AW': 'a', 'AY': 'a',
    'EH': 'e', 'ER': 'e', 'EY': 'e',
    'IH': 'i', 'IY': 'i',
    'UH': 'u', 'UW': 'u'
}
EN_NASAL_MAP = {'N': 'N', 'NG': 'N'}
EN_INDEX_MAP = {'a': 0, 'i': 1, 'u': 2, 'e': 3, 'o': 4, 'N': 5}


def build_lipsync_data_en(text: str, dur: float = DEFAULT_DUR) -> dict:
    """
    英文 → pronouncing (CMU) で発音解析 → 母音文字・インデックス抽出
    """
    words = re.findall(r"[A-Za-z']+", text)
    vowels = []
    phonemes = []

    for w in words:
        lookup = w.lower().replace("'", "")
        phones = pronouncing.phones_for_word(lookup)
        if not phones:
            continue
        # 先頭候補を使う
        for ph in phones[0].split():
            sym = re.sub(r"\d", "", ph)
            if sym in EN_VOWEL_MAP:
                v = EN_VOWEL_MAP[sym]
            elif sym in EN_NASAL_MAP:
                v = EN_NASAL_MAP[sym]
            else:
                continue
            vowels.append(v)
            phonemes.append(EN_INDEX_MAP[v])

    return {
        "vowels":    vowels,
        "phonemes":  phonemes,
        "durations": [dur] * len(vowels)
    }


#────────────────────────────────
# テキスト→JSON 共通処理
#────────────────────────────────
def process_all_txt_assets(lang: str = 'jp') -> None:
    """
    lang = 'jp' で日本語用、'en' で英語用。
    Assets/{lang}/*.txt → Exports/{lang}/*.json
    """
    base_dir = os.path.abspath(os.path.dirname(__file__))
    assets_dir = os.path.join(base_dir, 'Assets', lang)
    exports_dir = os.path.join(base_dir, 'Exports', lang)
    os.makedirs(exports_dir, exist_ok=True)

    fn_build = build_lipsync_data_jp if lang == 'jp' else build_lipsync_data_en

    for root, _, files in os.walk(assets_dir):
        for fname in files:
            if not fname.lower().endswith('.txt'):
                continue

            txt_path = os.path.join(root, fname)
            with open(txt_path, 'r', encoding='utf-8') as f:
                text = f.read().strip()

            data = fn_build(text)
            json_path = os.path.join(exports_dir, os.path.splitext(fname)[0] + '.json')
            with open(json_path, 'w', encoding='utf-8') as jf:
                json.dump(data, jf, ensure_ascii=False, indent=2)
            print(f'Exported [{lang}]: {json_path}')


if __name__ == '__main__':
    # 日本語解析:
    process_all_txt_assets('jp')
    # 英語解析:
    process_all_txt_assets('en')
