#include <iostream>
using namespace std;

//引用（给变量起别名）：语法 数据类型&别名 = 原名
//注意事项：1、引用必须先初始化，一旦初始化，引用不可以被改变

int main()
{
	int a1 = 10;
	int a2{ 100 };
	//创建引用
	//int &b1;错误
	int& b1 = a1;
	cout << "a1=" << a1 << endl;
	cout << "b1=" << b1 << endl;
	//引用可以改变原值
	b1={ 100 };
	b1 = a2;//变量赋值可以
	//&b1 = a2;错误
	cout << "a1=" << a1 << endl;
	cout << "b1=" << b1 << endl;
}