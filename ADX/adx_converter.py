import os
import pandas as pd
from io import StringIO


class ADX_Converter:
    def __init__(self, base_dir):
        """
        base_dir: Python実行ファイルと同階層にあるAssetsディレクトリを基準としたベースディレクトリ
        """
        self.assets_dir = os.path.join(base_dir, "Assets")
        self.output_dir = self.assets_dir  # 出力先をAssetsフォルダ内に設定

        # 入力ディレクトリ（Assets）が存在しない場合はエラー
        if not os.path.isdir(self.assets_dir):
            raise FileNotFoundError(f"Assets directory not found: {self.assets_dir}")

    @staticmethod
    def make_adxlip_header(wav_name):
        """
        CSVファイル名から対応するWAVファイル名を推測し、
        .adxlipヘッダーを返す
        """
        header = [
            f"// input: .\\VOICE_TEST\\{wav_name}\n",
            "// framerate: 60 [fps]\n",
            "// frame count, msec, width(0-1 def=0.583), height(0-1 def=0.000), "
            "tongue(0-1 def=0.000), A(0-1), I(0-1), U(0-1), E(0-1), O(0-1), Vol(dB)\n"
        ]
        return header

    def convert_file(self, csv_path):
        """
        単一のCSVファイルを読み込み、同名の.adxlipファイルを出力する
        """
        # ファイル名（拡張子なし）を取得して出力パスを構築
        base_name = os.path.splitext(os.path.basename(csv_path))[0]
        output_path = os.path.join(self.output_dir, f"{base_name}.adxlip")

        # 1) CSVを読み込み、コメント行を除去
        with open(csv_path, "r", encoding="utf-8") as f:
            lines = [line for line in f if not line.strip().startswith("//")]
        df = pd.read_csv(StringIO("".join(lines)), header=None)

        # 2) ヘッダーを生成
        wav_name = f"{base_name}.wav"
        header_lines = self.make_adxlip_header(wav_name)

        # 3) .adxlip形式で書き出し
        with open(output_path, "w", encoding="utf-8") as out_f:
            # ヘッダーコメント
            out_f.writelines(header_lines)

            # データ行
            # 列数は 11 列: [Frame, Time_ms, Width, Height, Tongue, A, I, U, E, O, Vol(dB)]
            for _, row in df.iterrows():
                formatted = []
                for idx, val in enumerate(row.tolist()):
                    if idx == 0 or idx == 1:
                        # フレーム番号と時間(ms)は整数化して書き出す
                        formatted.append(str(int(val)))
                    else:
                        # その他は小数点6桁で書き出す
                        formatted.append(f"{float(val):.6f}")
                out_f.write(", ".join(formatted) + "\n")

        print(f"Converted: {csv_path} -> {output_path}")

    def convert_folder(self):
        """
        Assetsディレクトリ内の全CSVファイルを一括で.adxlipに変換する
        """
        for filename in os.listdir(self.assets_dir):
            if filename.lower().endswith(".csv"):
                csv_path = os.path.join(self.assets_dir, filename)
                self.convert_file(csv_path)


if __name__ == "__main__":
    # 使用例:
    base_dir = os.getcwd()  # またはスクリプト配置ディレクトリ
    converter = ADX_Converter(base_dir=base_dir)
    converter.convert_folder()


