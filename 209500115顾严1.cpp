#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "请输入第一个整数：";
    cin >> num1;
    cout << "请输入第二个整数：";
    cin >> num2;
    int operation;
    cout << "请选择操作（1:加法，2:减法）：";
    cin >> operation;

    if (operation == 1) {
        cout << "结果：" << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (operation == 2) {
        cout << "结果：" << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else {
        cout << "无效的操作选择。" << endl;
    }

    return 0;
}
