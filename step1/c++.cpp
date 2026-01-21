#include <iostream>                   // 引入标准输入输出库
using namespace std;                  // 使用标准命名空间
int main() {
    auto a = 5;                       // x 自动推导为 int
    const int MAX_VALUE = 100;        // 与 C 一样  定义常量
    int x = 10;
    if (x > 5) {
        cout << "x is greater than 5" << endl;
    } else {
        cout << "x is less than or equal to 5" << endl;
    }

    cout << "Hello, World!" << endl;
    return 0;
}