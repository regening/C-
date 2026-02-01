#include <iostream>
#include <vector>                               // 引入 vector
#include <algorithm>                            // 引入算法库
using namespace std;

// 容器：以 vector 做例子
int main() {
    vector<int> v = {1, 2, 3, 4, 5};           // 定义一个整数向量

    v.push_back(6);                            // 向向量末尾添加元素

    for (int i = 0; i < v.size(); ++i) {       // 遍历并打印所有元素
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