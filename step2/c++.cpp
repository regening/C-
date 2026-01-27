#include <iostream>
using namespace std;

/*继承: 建一个基类，派生类可以继承基类
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
    
    void use() {
        display();                                               // 调用基类的 display 函数
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";  // 基类成员
    myCar.year = 2020;       // 基类成员
    myCar.model = "Corolla"; // 派生类成员
    myCar.use();
    return 0;
}*/

/*多态：通过多态，指向派生类对象，并调用派生类的重写函数。
class Animal {                                                  // 基类
public:
    virtual void sound() {                                      // 虚函数
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {                                     // 派生类
public:
    void sound() override {                                     // 重写虚函数
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {                                     // 派生类
public:
    void sound() override {                                     // 重写虚函数
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal;  
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound();  // 输出 "Woof!"，调用 Dog 类的 sound

    animal = &cat;
    animal->sound();  // 输出 "Meow!"，调用 Cat 类的 sound

    return 0;
}*/