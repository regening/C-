# 1. **STL：标准模板库**

STL 是 C++ 的一个重要部分，它提供了很多通用的类和算法，用于数据结构、算法以及迭代器的操作。学习 STL 将使你能够更高效地编写代码，避免重复造轮子。

### 常见的 STL 组件：

* **容器（Containers）**：如 `vector`、`list`、`map`、`set` 等。
* **算法（Algorithms）**：如 `sort`、`find`、`copy`、`accumulate` 等。
* **迭代器（Iterators）**：用于遍历容器元素。

### 1.1 **容器**

容器是用来存储数据的类，例如：

* **`vector`**：动态数组，可以快速访问元素并自动调整大小。
* **`list`**：双向链表，适用于频繁插入和删除操作。
* **`map`**：存储键值对，并根据键进行排序。


### 1.2 **算法**

STL 提供了一些常用算法，直接操作容器中的元素，而无需显式编写循环。

---

# 2. **文件操作**

文件操作是 C++ 中处理外部数据的关键技能。你需要学习如何读取和写入文件。<br>

C++ 提供了 `fstream` 库来处理文件操作，包括文件的读取和写入。

```cpp
    // 写入文件
    ofstream outFile("文件名.txt");
    // 读取文件
    ifstream inFile("文件名.txt");
```

---

# 3. **C++11及以后的新特性**

C++11 引入了很多新特性，这些特性大大提高了 C++ 的编程效率和代码的可读性。

### 3.1 **自动类型推导 **

`auto` 关键字允许编译器自动推导变量类型，减少了代码的冗余。

```cpp
auto x = 10;   // 自动推导为 int
auto y = 3.14; // 自动推导为 double
```

### 3.2 **智能指针 **

智能指针用于自动管理内存，避免手动管理内存时发生错误。

```cpp
#include <iostream>
#include <memory>  // 引入智能指针库
using namespace std;

int main() {
    unique_ptr<int> p = make_unique<int>(10);  // 创建 unique_ptr
    cout << *p << endl;  // 输出 10
    return 0;
}
```

### 3.3 **lambda 表达式**

Lambda 表达式允许创建匿名函数，通常用于需要传递函数的场景，比如在 STL 算法中使用。

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};
    
    // 使用 lambda 表达式排序
    sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
    
    for (int num : v) cout << num << " ";  // 输出 1 2 3 5 8
    cout << endl;

    return 0;
}
```

---
