#include <iostream>
using namespace std;

//引用做函数的返回值
	//1、不要返回局部变量的引用。
	

int & test01()
{
	int a1 = 10;//局部变量a1,存放在栈区,如果用static修饰，main函数调用后就能正常输出
	//static int a1 =10;
	return a1;
}

int& test02()
{
	static int a2 = 10;
	return a2;
}

int main()
{
	
	int& ref = test01(); 
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;

	//2、函数调用可以作为左值
	test02() = 20; //②如果函数的返回值为引用，函数的调用可以作为左值	
	int& ref02 = test02();//接收static修饰的引用返回值可以正常输出
	cout << "ref02=" << ref02 << endl;
	cout << "ref02=" << ref02 << endl;

}