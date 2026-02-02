#include <iostream>
#include <vector>                               // 引入 vector
#include <algorithm>                            // 引入算法库
#include <fstream>                              // 引入文件操作头文件
using namespace std;

// 容器：以 vector 做例子
int main() {
    vector<int> v = {1, 2, 3, 4, 5};            // 定义一个整数向量

    v.push_back(6);                             // 向向量末尾添加元素

    for (int i = 0; i < v.size(); ++i) {        // 遍历并打印所有元素
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}


// 算法：以 sort 和 find 做例子
int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    sort(v.begin(), v.end());                          // 排序
    cout << "Sorted: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    if (find(v.begin(), v.end(), 3) != v.end()) {     // 查找元素
        cout << "Found 3!" << endl;
    }

    return 0;
}


// 读取和写入文件
int main() {
    // 写入文件
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, this is a test." << endl;
        outFile << "Writing to a file in C++." << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing!" << endl;
    }

    // 读取文件
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading!" << endl;
    }

    return 0;
}