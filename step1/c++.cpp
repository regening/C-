#include <iostream>                   // 引入标准输入输出库
using namespace std;                  // 使用标准命名空间

class Car {                           // 定义一个名为car的类，类是一个模板，描述car这个对象的特征和行为
  public:
      string brand;                   // 成员变量：brand
      int year;                       // 成员年份：year
      
      void start() {                  // 成员函数：启动 
            cout << "The car is starting." << endl;
      }
};

int main() {
    auto a = 5;                       // x 自动推导为 int
    const int MAX_VALUE = 100;        // 与 C 一样  定义常量
    int x = 10;

    if (x > 5) {                      // 条件判断
        cout << "x is greater than 5" << endl;
    } else {
        cout << "x is less than or equal to 5" << endl;
    }

    for (int i = 0; i < 5; ++i) {     // 循环 
        cout << i << endl;
    }

    Car myCar;                        // 创建一个Car类的对象，是car类的一个实例（对象）
    myCar.brand = "Toyota";           // 设置 myCar 对象的 brand 为 "Toyota"
    myCar.year = 2020;                // 设置 myCar 对象的 year 为 2020
    myCar.start();                    // 调用 myCar 对象的 start 方法
    




    cout << "Hello, World!" << endl;

    return 0;
}