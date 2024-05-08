#include <iostream>

using namespace std;
class Flag {
private:
    uint8_t flag; // 8つのフラグを保持する変数

public:
    Flag() : flag(0) {} // フラグをすべてて初期化

    // フラグを立てる
    void set(int index) {
        flag |= (1 << index);
    }

    // フラグを判定する
    bool isSet(int index) {
        return (flag & (1 << index)) != 0;
    }

    // フラグをクリアする
    void clear(int index) {
        flag &= ~(1 << index);
    }
};

int main() {
    Flag flagManager;

    // フラグの設定と判定
    flagManager.set(1); // フラグ1を立てる
    cout << "フラグ1が立っているか" << flagManager.isSet(1) << endl;

    // フラグのクリアと判定
    flagManager.clear(1); // フラグ1をクリアする
    cout << "フラグ1が立っているか" << flagManager.isSet(1) << endl;

    return 0;
}
