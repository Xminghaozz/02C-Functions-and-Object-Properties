#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局常量
const int c_a = 10;

int main()
{
	//全局区 全局变量、静态变量、常量

	//创建普通局部变量
	int a1 = 10;
	int b1 = 10;
	cout << "局部变量a1的地址为：" << &a1 << endl;
	cout << "局部变量b1的地址为：" << &b1 << endl;
	cout << "全局变量g_a的地址为：" << &g_a << endl;
	cout << "全局变量g_b的地址为：" << &g_b << endl;

	//创建静态变量 在普通变量前面加static
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为：" << &s_a << endl;
	cout << "静态变量s_b的地址为：" << &s_b << endl;

	//常量 1、字符串常量 2、const修饰的常量
	cout << "字符串常量的地址为：" << &"hello world" << endl;
	cout << "const修饰的全局常量c_a的地址为" << &c_a << endl;

	//const修饰后的局部变量称为（局部常量）常变量，有的说法认为其本质仍为变量，这种说法符合很多编译器的存储
	//const修饰的局部变量可以被指针间接改变，而const修饰的全局变量无法被改变
	const int c_b = 10;
	cout << "const修饰的局部常量c_b的地址为" << &c_b << endl;

	//总结：
	//1、C++在程序运行前分为全局区和代码区
	代码区的特点是共享和只读
	全局区中存放全局变量、静态变量、常量
	常量区中存放const修饰的全局变量

}