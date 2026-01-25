# 1. **C++与C的区别**

* **C++是C的超集**，也就是说，C++包括了C语言的所有特性，并且增加了一些新的特性，比如面向对象编程、模板、STL等。
* C++除了支持C的语法外，还有很多新的特性，比如`namespace`（命名空间）和类（class）等。

---

# 2. **C++基本语法**

* **头文件包含**：
  在C++中，仍会使用`#include`来引入外部库，但是C++有一个新的特性——**命名空间**（`namespace`）。这可以帮助避免不同库之间名字冲突。 

  ```cpp
  #include <iostream>  // 引入标准输入输出库
  using namespace std;  // 使用标准命名空间
  ```
* **主函数**：
  C++的程序从`main`函数开始，和C一样。`int main()`是标准的程序入口，返回一个整数值。

  ```cpp
  int main() {
      cout << "Hello, World!" << endl;
      return 0;
  }
  ```

---

# 3. **C++的变量类型**

* C++的基础数据类型与C类似，分别是：`int`、`float`、`double`、`char`等。但在C++中可以使用更多的类型，比如`bool`（布尔类型），并且支持**类型推导**（`auto`）：

  ```cpp
  auto x = 5;  // x 自动推导为 int
  ```

* string 是 C++ 标准库中提供的一种数据类型，用于表示和操作字符串。

  ```cpp
  string name;   // 定义了一个名为 name 的字符串
  ```

* **ps**： `类型推导`指让编译器根据变量的初始化表达式自动推导出变量的类型，即在，声明变量时不需要显式地指定类型，编译器会根据你给定的初始值推导出合适的类型。

* **常量**：在C++中，我们可以使用`const`来定义常量，`const`变量的值不可改变。

  ```cpp
  const int MAX_VALUE = 100;
  ```

---

# 4. **控制结构**

* **条件语句**：`if`、`else if`、`else`等控制结构是C和C++中一样的。

  ```cpp
  int x = 10;
  if (x > 5) {
      cout << "x is greater than 5" << endl;
  } else {
      cout << "x is less than or equal to 5" << endl;
  }
  ```
* **循环**：`for`、`while` 和 `do-while` 语句同C语言一样，用来执行重复的任务。

  ```cpp
  for (int i = 0; i < 5; ++i) {
      cout << i << endl;
  }
  ```

---

# 5. **函数**

* 在C++中，函数和C语言中的用法差不多。可以定义**普通函数**和**递归函数**。

  ```cpp
  int add(int a, int b) {
      return a + b;
  }
  ```
* **默认参数**：可为函数的参数指定默认值。

  ```cpp
  void printMessage(string message = "Hello!") {
      cout << message << endl;
  }
  ```

---

# 6. **面向对象编程（OOP）基础**

### C++的最大特点是支持**面向对象编程**，在这一部分，需要理解以下几个基本概念：

* 在 C++ 中，类（class）是面向对象编程的核心。一个类可以包含数据成员（变量）和成员函数（方法），它们共同作用来描述一个对象的特性和行为。

####  **类与对象**：C++的类是数据和操作数据的函数的集合，类是面向对象编程的基本单元。

####  **类与对象的关系**：

* * 类（class）：是一个蓝图（模板），它定义了对象的结构和行为。类并不占用内存，它只是一个定义。

* * 对象（object）：是类的实例。创建对象时，类中定义的成员变量和成员函数被实例化为具体的内容，且对象会占用内存。


  ```cpp
  class Car {   // 定义一个名为car的类，类是一个模板，描述car这个对象的特征和行为
  public:
      string brand;    // 成员变量：brand
      int year;        // 成员年份：year
      
      void start() {   // 成员函数：启动 
          cout << "The car is starting." << endl;
      }
  };

  int main() {
      Car myCar;  // 创建一个Car类的对象，是car类的一个实例（对象）
      myCar.brand = "Toyota";  // 设置 myCar 对象的 brand 为 "Toyota"
      myCar.year = 2020;       // 设置 myCar 对象的 year 为 2020
      myCar.start();           // 调用 myCar 对象的 start 方法
      return 0;
  }
  ```

  * 在这个例子中，Car 是一个类，myCar 是一个对象。可通过多个对象来使用同一个类，每个对象都会有独立的数据（例如品牌和年份），但它们都可以调用相同的成员函数（例如启动）。

####  **构造函数和析构函数**：构造函数和析构函数是类中的特殊成员函数，构造函数在对象创建时调用，析构函数在对象销毁时调用。

1. **构造函数**：构造函数是在对象创建时自动调用的特殊函数。构造函数的主要作用是对类的成员变量进行初始化。

* **构造函数的特点**：

  * 它与类的名称相同。
  * 它没有返回类型（包括 `void`）。
  * 构造函数通常用于为类的成员变量赋初值。

```cpp
class Car {
public:
    string brand;  // 品牌
    int year;      // 年份
    
    Car(string b, int y) {  // 构造函数
        brand = b;   // 初始化 brand
        year = y;    // 初始化 year
    }
};
```

在这个例子中，构造函数 `Car(string b, int y)` 有两个参数 `b` 和 `y`，分别用于初始化类的成员变量 `brand` 和 `year`。

当你创建一个 `Car` 类型的对象时，构造函数会自动调用，并且会使用传入的参数来初始化该对象的属性。

```cpp
// 创建对象并调用构造函数：
int main() {
    Car myCar("Toyota", 2020);  // 创建一个对象并调用构造函数，传入品牌和年份
    cout << "Brand: " << myCar.brand << ", Year: " << myCar.year << endl;
    return 0;
}
// 输出：Brand: Toyota, Year: 2020
```

2. **析构函数**

析构函数是一个类中的特殊成员函数，它在对象销毁时自动调用。析构函数的作用通常是进行一些资源的清理工作，比如释放动态分配的内存、关闭文件等。

* **析构函数的特点**：

  * 它的名字与类的名字相同，但前面有一个波浪号 `~`。
  * 它没有返回类型，也不接受任何参数。
  * 析构函数不会被显式调用，C++ 会在对象生命周期结束时自动调用。

```cpp
class Car {
public:
    string brand;  // 品牌
    int year;      // 年份
    
    Car(string b, int y) {   // 构造函数
        brand = b;
        year = y;
    }

    ~Car() {    // 析构函数
        cout << "Car object destroyed!" << endl;
    }
};
```

在这个例子中，析构函数 `~Car()` 用来输出一条信息，表示对象 `Car` 被销毁。

```cpp
// 创建对象并触发析构函数：
int main() {
    Car myCar("Toyota", 2020);  // 创建对象并调用构造函数
    cout << "Brand: " << myCar.brand << ", Year: " << myCar.year << endl;
    
    // 程序结束时，myCar 对象超出作用域，析构函数自动调用
    return 0;
}
// 输出：
// Brand: Toyota, Year: 2020
// Car object destroyed!
```

当 `myCar` 对象超出作用域并销毁时，析构函数自动调用，输出 `"Car object destroyed!"`。

3. **构造函数和析构函数的应用场景**

* **构造函数**：用于初始化对象，保证对象在创建时就具备合理的状态。它通常在对象的生命周期开始时被调用。

  * 例如，给类的成员变量设置初始值、分配资源等。
* **析构函数**：用于清理对象，释放对象占用的资源，避免内存泄漏等问题。它通常在对象的生命周期结束时被调用。

  * 例如，释放动态分配的内存、关闭文件句柄、断开网络连接等。

4. **构造函数的重载**

C++ 允许一个类有多个构造函数，这称为 **构造函数重载**。每个构造函数可以有不同的参数列表，从而允许不同方式的对象创建。

```cpp
class Car {
public:
    string brand;
    int year;
    
    // 无参数的构造函数
    Car() {
        brand = "Unknown";
        year = 0;
    }
    
    // 带参数的构造函数
    Car(string b, int y) {
        brand = b;
        year = y;
    }
};
```

可以使用不同的构造函数来创建对象：

```cpp
Car car1;                 // 使用无参数的构造函数，初始化为默认值
Car car2("Ford", 2021);   // 使用带参数的构造函数，传入品牌和年份
```

### 总结：

* **构造函数**：用于初始化对象的成员变量，并进行必要的资源分配。
* **析构函数**：用于在对象销毁时清理资源，进行必要的清理操作。
* **构造函数可以重载**：同一个类可以有多个构造函数，根据不同的参数初始化对象。

* **成员函数与成员变量**：类的成员函数是可以访问类内数据的函数，成员变量是类中的数据。

  ```cpp
  class Car {
  public:
      string brand;
      int year;
      
      void displayInfo() {
          cout << "Brand: " << brand << ", Year: " << year << endl;
      }
  };
  ```

* **访问控制**：C++类中的成员变量可以是`public`、`private` 或 `protected`。`private`成员只能在类的成员函数内访问，`public`成员可以被外部访问。

  ```cpp
  class Car {
  private:
      string brand;
      
  public:
      void setBrand(string b) { brand = b; }
      string getBrand() { return brand; }
  };
  ```

---

# 7. **C++中的标准库**

* **输入输出**：C++使用`iostream`来进行标准输入输出，和C中的`stdio.h`不同。

  ```cpp
  #include <iostream>
  using namespace std;

  int main() {
      cout << "Enter a number: ";
      int number;
      cin >> number;
      cout << "You entered: " << number << endl;
      return 0;
  }
  ```

* **字符串**：C++使用`string`类型来处理字符串，字符串处理比C语言中的字符数组要简便。

  ```cpp
  #include <iostream>
  #include <string>
  using namespace std;

  int main() {
      string name = "John";
      cout << "Name: " << name << endl;
      return 0;
  }
  ```

---

