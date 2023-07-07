#include <iostream>
using namespace std;

//栈区的注意事项 ---不要返回局部变量的地址
//栈区的数据由编译器管理和开辟

int *func( int b)//形参数据也会放在栈区
{
	b = 100;
	int a1 = 10;//局部变量，存放在栈区，栈区的数据在函数执行完后自动释放
	return &a1;//返回局部变量的地址
}

int main()
{
	int* p1 = func(1);//用指针接收函数的返回值

	//在X86架构下输出，第一次打印为10，第二次无法输出，X64两次都无法输出
	cout << "局部变量" << *p1 << endl;
	cout << "局部变量" << *p1 << endl;

}