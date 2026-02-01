#include <iostream>
#include <memory>                  // 引入智能指针库
using namespace std;

/*继承: 建一个基类，派生类可以继承基类 */
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
}
// 输出：
// Brand: Toyota, Year: 2020
// Model: Corolla              


/*多态：通过多态，指向派生类对象，并调用派生类的重写函数。*/
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
// `sound()` 是一个虚函数，允许通过基类指针 `animal` 调用派生类的实现。通过使用 `virtual` 关键字，C++ 实现了运行时的多态。
int main() {
    Animal* animal;  
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound();  // 输出 "Woof!"，调用 Dog 类的 sound

    animal = &cat;
    animal->sound();  // 输出 "Meow!"，调用 Cat 类的 sound

    return 0;
}
// 输出：
// Woof!
// Meow!


// 函数模板：`add()` 是一个函数模板，它根据传入参数的类型自动推导出返回类型。
template <typename T>  // T 是一个类型参数
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;  // 调用 int 类型
    cout << add(2.5, 3.5) << endl;  // 调用 double 类型
    return 0;
}
// 输出：
// 8
// 6

// 类模板：`Box` 是一个类模板，可以接受任何类型 `T`，根据传入的类型，类会自动处理。

template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};

int main() {
    Box<int> intBox(10);
    cout << intBox.getValue() << endl;  // 输出 10

    Box<string> strBox("Hello");
    cout << strBox.getValue() << endl;  // 输出 "Hello"

    return 0;
}
// 输出：
// 10 
// Hello


// 异常处理
int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";  // 抛出异常
    }
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0) << endl;  // 捕获异常
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;  // 处理异常
    }

    return 0;
}
// 输出：Error: Division by zero!
// 当除数为零时，程序会抛出一个异常 `"Division by zero!"`，并且在 `main()` 函数中捕获并处理异常。


// 智能指针使用
class MyClass {
public:
    MyClass() { cout << "MyClass created" << endl; }
    ~MyClass() { cout << "MyClass destroyed" << endl; }
};

int main() {
    unique_ptr<MyClass> ptr(new MyClass());  // 使用 unique_ptr 管理对象
    // 不需要手动删除 ptr，程序结束时自动销毁
    return 0;
}
// 输出：
// MyClass created
// MyClass destroyed
// `std::unique_ptr` 会在超出作用域时自动释放内存，避免手动调用 `delete`。
