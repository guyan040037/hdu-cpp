#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "�������һ��������";
    cin >> num1;
    cout << "������ڶ���������";
    cin >> num2;
    int operation;
    cout << "��ѡ�������1:�ӷ���2:��������";
    cin >> operation;

    if (operation == 1) {
        cout << "�����" << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if (operation == 2) {
        cout << "�����" << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else {
        cout << "��Ч�Ĳ���ѡ��" << endl;
    }

    return 0;
}
