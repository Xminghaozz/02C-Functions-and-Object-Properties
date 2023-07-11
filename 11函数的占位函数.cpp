#include<iostream>
using namespace std;

//函数的占位参数
//语法：返回类型 函数名 数据类型{}

void test1(int a, int)//这个int就是占位作用，必须给它传值才能调用
{
	cout << "test1 haha" << endl;
}

void test2(int a, int b = 10)//占位参数可以有默认值，但是这样做就没有什么实际意义
{
	cout << "test2 haha" << endl;
}

int main()
{
	//test1(1);//error，占位参数必须有值
	test1(1, 2);
	test2(1);
	test2(1, 2);
}