#include <iostream>
using namespace std;

//堆区：由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
//			在C++中主要用new开辟堆区内存,程序员可以用delete手动释放 
//程序运行前分为：代码区，全局区
//程序运行后分为：栈区, 堆区

int *func()
{
	//利用new关键字可以开辟内存到堆区
	//指针 本质上也是局部变量，放在栈上；指针保存的数据放在堆区
	int *a = new int(10);//利用new创建的数据，会返回该数据类型对应的指针
	return a;
}

int main()
{
	int* p1 = func();
	cout << *p1 << endl;
	cout << *p1 << endl;

}