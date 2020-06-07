# C++超入門

## clone repository

```bash
git clone https://github.com/ottonove/start-cpp.git
code start-cpp # VSCodeでプロジェクトを開く
```

## Build

1. `main.cpp`を表示。
1. `cmd`+`shift`+`b`でビルドタスク選択バーを開く。
1. `C/C++: clang build active file`を選択する。
1. ビルドが成功すると、実行ファイル：`a.out`が`start-cpp`直下に生成される。
1. ターミナルから`a.out`を実行する。

## Run

```bash
# ターミナル
start-cpp ottonove$ ./a.out
hello world! # この様に表示されれば成功！
```

## Debug

ソースコードにブレイクポイントを設置して`F5`キーを押す。

![](2020-06-07-18-55-02.png)
