# 1. **继承（Inheritance）**

继承是面向对象编程中的一个重要特性，它允许创建一个新的类，这个新类可以继承已有类的属性和方法。继承使得代码复用变得更加容易，避免了重复代码。

### 继承的基本概念：何为继承？

* **基类（Base Class）**：被继承的类。
* **派生类（Derived Class）**：从基类继承的类。

```cpp
#include <iostream>
using namespace std;

class Vehicle {  // 基类
public:
    string brand;
    int year;
    
    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {  // 派生类，继承自 Vehicle
public:
    string model;
    
    void displayCarInfo() {
        display();  // 调用基类的 display 函数
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
// 输出：
// Brand: Toyota, Year: 2020
// Model: Corolla
```

### 继承的注意点：

* **访问控制符**：可以控制派生类对基类成员的访问。

  * `public` 继承：基类的 `public` 和 `protected` 成员可以在派生类中访问。
  * `protected` 继承：基类的 `public` 和 `protected` 成员在派生类中是 `protected` 的。
  * `private` 继承：基类的所有成员在派生类中都是 `private` 的。

---

# 2. **多态（Polymorphism）**

多态是面向对象编程的另一个核心特性，允许同一个接口表现不同的行为。通过多态，基类指针或引用可以指向派生类对象，并调用派生类的重写函数。

### 多态的两种类型：

* **编译时多态**：通过函数重载或运算符重载实现。
* **运行时多态**：通过虚函数（`virtual`）和继承实现。

```cpp
#include <iostream>
using namespace std;

class Animal {  // 基类
public:
    virtual void sound() {  // 虚函数
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {  // 派生类
public:
    void sound() override {  // 重写虚函数
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {  // 派生类
public:
    void sound() override {  // 重写虚函数
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
}
// 输出：
// Woof!
// Meow!
```

在这个例子中，`sound()` 是一个虚函数，允许通过基类指针 `animal` 调用派生类的实现。通过使用 `virtual` 关键字，C++ 实现了运行时的多态。

---
