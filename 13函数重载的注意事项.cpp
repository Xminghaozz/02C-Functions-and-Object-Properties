# include<iostream>
using namespace std;

//函数重载的注意事项
//1、引用作为函数重载条件,加const后类型发生变化，是正确的函数重载
void func1(int& a)//局部变量存放在栈区或者堆区 a无法接收存储在常量区的10
{
	cout << "func1(int &a)调用" << endl;
}

void func1(const int& a)
{
	cout << "func1(const int &a)调用" << endl;
}

//2、函数重载碰到默认参数
void func2(int a, int b =10)//
{
	cout << "func2(int a, int b)调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)调用" << endl;
}

int main()
{
	int a = 10;
	func1(a);
	const int a1 = 10;
	func1(a1);//也可以直接传一个常量 如func1(10)

	//func2(a);报错，当函数重载碰到默认参数会出现二义性，要避免这种情况发生
}