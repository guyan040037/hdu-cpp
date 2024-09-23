#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "请输入一个整数: ";
	cin >>a;
	if(a%2==0)
	{
		cout <<a << " 是偶数" << endl;
	}else{
		cout << a <<" 是奇数" << endl;
	}
	
	return 0;
}
