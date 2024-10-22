# -*- coding: utf-8 -*-

import os
import cv2
import numpy as np
import tensorflow as tf
from tensorflow.keras.layers import Flatten, Dense, Dropout, GlobalAveragePooling2D
from tensorflow.keras.optimizers import Adam
from tensorflow.keras.applications import VGG16
from sklearn.model_selection import train_test_split
from tensorflow.keras import Input
from tensorflow.keras.preprocessing.image import ImageDataGenerator
from tensorflow.keras.utils import to_categorical


def load_images_from_folder(folder, label, size=(128, 128)):
    images = []
    labels = []
    for filename in os.listdir(folder):
        img_path = os.path.join(folder, filename)
        img = cv2.imread(img_path)

        if img is not None:
            img_resized = cv2.resize(img, size)
            img_normalized = img_resized / 255.0  # 正規化
            images.append(img_normalized)
            labels.append(label)
    return np.array(images), np.array(labels)


def build_model(num_classes):

    base_model = VGG16(weights='imagenet', include_top=False, input_shape=(128, 128, 3))
    base_model.trainable = False  # 転移学習のためにベースモデルの重みを凍結

    model = tf.keras.Sequential([
        base_model,
        GlobalAveragePooling2D(),
        Dense(256, activation='relu'),
        Dropout(0.5),
        Dense(num_classes, activation='softmax')  # 多クラス分類に対応
    ])
    model.compile(optimizer=Adam(learning_rate=0.0001), loss='categorical_crossentropy', metrics=['accuracy', 'Precision', 'Recall'])
    return model


def main():
    cross_types = ["cross", "t_intersection", "y_intersection", "x_intersection"]

    # データセットのフォルダパス
    success_folder = "./Resources/success"
    fail_folder = "./Resources/fail"

    # 画像を読み込む
    success_images, success_labels = load_images_from_folder(success_folder, label=1)
    fail_images, fail_labels = load_images_from_folder(fail_folder, label=0)

    # データとラベルを結合
    x_value = np.concatenate((success_images, fail_images), axis=0)
    y_value = np.concatenate((success_labels, fail_labels), axis=0)
    y_value = to_categorical(y_value, num_classes=2)  # 二値分類用にエンコード

    # 訓練データとテストデータに分割
    x_train, x_test, y_train, y_test = train_test_split(x_value, y_value, test_size=0.2, random_state=42)

    # モデルを構築
    model = build_model(num_classes=2)

    datagen = ImageDataGenerator(
        rotation_range=20,
        width_shift_range=0.2,
        height_shift_range=0.2,
        zoom_range=0.2,
        brightness_range=[0.8, 1.2],
        horizontal_flip=True,
        fill_mode='nearest'
    )

    # モデルのトレーニング
    epochs = 30
    batch_size = 32
    model.fit(datagen.flow(x_train, y_train, batch_size=batch_size), epochs=epochs, validation_data=(x_test, y_test))

    # モデルの評価
    """
    損失（loss）
    精度（accuracy）
    Precision（精度）
    Recall（再現率）
    """
    evaluation_results = model.evaluate(x_test, y_test, verbose=2)
    test_loss = evaluation_results[0]  # 最初の値はloss
    test_acc = evaluation_results[1]  # 2番目の値はaccuracy
    print("\nTest loss:", test_loss)
    print("Test accuracy:", test_acc)

    # モデルを保存
    model.save("intersection_detector_model.keras")


if __name__ == "__main__":
    main()




