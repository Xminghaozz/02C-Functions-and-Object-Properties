#include <iostream>
using namespace std;

//函数重载
//作用：函数名可以相同，提高复用率
//满足条件：
//1、同一个作用域
//2、函数名称相同
//3、参数类型不同/个数不同/顺序不同
//函数的返回值类型不能作为函数重载的条件

// 在全局作用域
void test1()
{
	cout << "调用test1()函数" << endl;
}

void test2(int a)
{
	cout << "调用test2(int a)函数" << endl;
}

void test3(int a, int b)
{
	cout << "调用test3(int a, int b)函数" << endl;
}

void test4(int a, double b)
{
	cout << "调用test4(int a, double b)函数" << endl;
}

void test5(double a, int b)
{
	cout << "调用test5(double a ,int b)函数" << endl;
}

int main()
{
	test1();
	test2(1);
	test3(1, 2);
	test4(1, 3.14);
	test5(3.14, 1);
}