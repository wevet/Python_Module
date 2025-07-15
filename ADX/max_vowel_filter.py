import pandas as pd
import re
from io import StringIO
import os


class MaxVowel_Filter:
    """
    ディレクトリ内または単一ファイルの CSV/.adxlip を対象に、
    母音 (A,I,U,E,O) の最大値のみを残し、他を 0 にして
    同じフォーマットで出力するフィルタリングクラス。
    """
    def __init__(self, input_path, output_path=None):
        """
        :param input_path: ファイルまたはディレクトリのパス
        :param output_path: 単一ファイル実行時の出力パス (省略可)
        """
        self.input_path = input_path
        self.output_path = output_path

    def run(self):
        if os.path.isdir(self.input_path):
            # ディレクトリ内のすべての .csv/.adxlip を処理
            for filename in os.listdir(self.input_path):
                #if filename.lower().endswith(('.csv', '.adxlip')):
                if filename.lower().endswith('.csv'):
                    inp = os.path.join(self.input_path, filename)
                    base, ext = os.path.splitext(filename)
                    out = os.path.join(self.input_path, f"{base}_filtered{ext}")
                    self._process_file(inp, out)
        else:
            # 単一ファイル
            out = self.output_path
            if not out:
                base, ext = os.path.splitext(self.input_path)
                out = f"{base}_filtered{ext}"
            self._process_file(self.input_path, out)


    @staticmethod
    def _process_file(input_file, output_file):
        # 1) ファイルを読み込み、コメント行とデータ行を分離
        with open(input_file, 'r', encoding='utf-8') as f:
            lines = f.readlines()
        header_lines = [l for l in lines if l.lstrip().startswith('//')]
        data_lines = [l for l in lines if not l.lstrip().startswith('//')]

        # 2) データ部を DataFrame に読み込み（カンマ区切り）
        df = pd.read_csv(StringIO(''.join(data_lines)), sep=',', header=None, engine='python')
        df.columns = ["Frame", "Time_ms", "Width", "Height", "Tongue", "A", "I", "U", "E", "O", "Vol_dB"]

        # 3) 数値列を正しい型に変換
        numeric_cols = ["Frame", "Time_ms", "Width", "Height", "Tongue", "A", "I", "U", "E", "O", "Vol_dB"]
        df[numeric_cols] = df[numeric_cols].apply(pd.to_numeric, errors='coerce').fillna(0.0)

        # 4) 母音列のみを対象に、各行で最大値以外を 0 に
        vowels = ["A", "I", "U", "E", "O"]

        def keep_max_only(row):
            vals = row[vowels].values
            idx = vals.argmax()
            return [vals[i] if i == idx and vals[i] > 0 else 0.0 for i in range(len(vals))]

        df[vowels] = df.apply(keep_max_only, axis=1, result_type='expand')

        # 5) 出力ファイルに書き込む（カンマ区切り）
        with open(output_file, 'w', encoding='utf-8') as out:
            # コメントヘッダー
            out.writelines(header_lines)
            # データ行をカンマ区切りで出力
            for _, r in df.iterrows():
                parts = [
                    str(int(r["Frame"])),
                    str(int(r["Time_ms"])),
                    f"{r['Width']:.6f}",
                    f"{r['Height']:.6f}",
                    f"{r['Tongue']:.6f}",
                    f"{r['A']:.6f}",
                    f"{r['I']:.6f}",
                    f"{r['U']:.6f}",
                    f"{r['E']:.6f}",
                    f"{r['O']:.6f}",
                    f"{r['Vol_dB']:.6f}"
                ]
                out.write(",".join(parts) + "\n")
        print(f"Converted: {input_file} -> {output_file}")



if __name__ == "__main__":
    converter = MaxVowel_Filter(input_path="./Assets")
    converter.run()


