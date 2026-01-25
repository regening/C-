#include <iostream>
using namespace std;

/*继承: 建一个基类，派生类可以继承基类*/
class Vehicle {                                                   // 基类
public:
    string brand;
    int year;
    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {                                     // 派生类，继承自 Vehicle
public:
    string model;
    
    void displayCarInfo() {
        display();                                               // 调用基类的 display 函数
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";  // 基类成员
    myCar.year = 2020;       // 基类成员
    myCar.model = "Corolla"; // 派生类成员
    myCar.displayCarInfo();
    return 0;
}