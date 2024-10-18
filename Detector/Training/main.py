# -*- coding: utf-8 -*-

import os
import cv2
import numpy as np
import tensorflow as tf
from tensorflow.keras.layers import Conv2D, MaxPooling2D, Flatten, Dense
from tensorflow.keras.optimizers import Adam
from sklearn.model_selection import train_test_split
from tensorflow.keras import Input
from tensorflow.keras.preprocessing.image import ImageDataGenerator

def load_images_from_folder(folder, label, size=(128, 128)):
    images = []
    labels = []
    for filename in os.listdir(folder):
        img_path = os.path.join(folder, filename)
        img = cv2.imread(img_path)
        if img is not None:
            img_resized = cv2.resize(img, size)
            img_gray = cv2.cvtColor(img_resized, cv2.COLOR_BGR2GRAY)
            img_normalized = img_gray / 255.0
            images.append(img_normalized.reshape(128, 128, 1))
            labels.append(label)
    return np.array(images), np.array(labels)


def build_model():
    model = tf.keras.Sequential([
        Input(shape=(128, 128, 1)),
        Conv2D(32, (3, 3), activation='relu'),  # 畳み込み層 (Conv2D)
        MaxPooling2D((2, 2)),   # プーリング層 (MaxPooling2D)
        Conv2D(64, (3, 3), activation='relu'),   # 畳み込み層 (Conv2D)
        MaxPooling2D((2, 2)),  # プーリング層 (MaxPooling2D)
        Flatten(),  # 平坦化 (Flatten)
        Dense(64, activation='relu'),  # 全結合層 (Dense)
        Dense(1, activation='sigmoid')  # 出力層 (Dense)
    ])
    model.compile(optimizer=Adam(learning_rate=0.001), loss='binary_crossentropy', metrics=['accuracy'])
    return model


def main():
    # データセットのフォルダパス
    success_folder = "./Resources/success"
    fail_folder = "./Resources/fail"

    # 画像を読み込む
    success_images, success_labels = load_images_from_folder(success_folder, label=1)
    fail_images, fail_labels = load_images_from_folder(fail_folder, label=0)

    # データとラベルを結合
    x_value = np.concatenate((success_images, fail_images), axis=0)
    y_value = np.concatenate((success_labels, fail_labels), axis=0)

    # 訓練データとテストデータに分割
    x_train, x_test, y_train, y_test = train_test_split(x_value, y_value, test_size=0.2, random_state=42)

    # モデルを構築
    model = build_model()

    datagen = ImageDataGenerator(
        rotation_range=20,
        width_shift_range=0.2,
        height_shift_range=0.2,
        zoom_range=0.2,
        horizontal_flip=True
    )

    # モデルのトレーニング
    epochs = 20
    batch_size = 64
    model.fit(datagen.flow(x_train, y_train, batch_size=batch_size), epochs=epochs, validation_data=(x_test, y_test))

    # モデルの評価
    test_loss, test_acc = model.evaluate(x_test, y_test, verbose=2)
    print("\nTest accuracy:", test_acc)

    # モデルを保存
    model.save("intersection_detector_model.keras")


if __name__ == "__main__":
    main()




