#include <iostream>
using namespace std;

//静态成员：在成员变量和成员函数前加关键字static,有访问权限
//静态成员分为：

class Person
{
public:
	//1、静态成员变量。所有对象共享同一份数据；在编译阶段分配内存（全局区）；在类内声明
	static int mA;

	//2、静态成员函数。所有对象共享同一个函数；静态成员函数只能访问静态成员变量
	//静态成员函数也有访问权限
	static void func()
	{
		mA = 300;
		//mC = 300;静态成员函数无法访问非静态成员变量，无法区分到底是哪个对象的mC属性
		cout << "static void func调用" << endl;
	}
	int mC;
private:
	static int mB;
};
//在类外初始化
int Person::mA = 100;
int Person::mB = 200;

void test01()
{
	Person p1;
	cout << p1.mA << endl;

	Person p2;
	p2.mA = 200;
	cout << p1.mA << endl;//200 共享同一份数据，p2更改,p1访问更改后的数据

}

void test02()
{
	//静态成员变量有两种访问方式
	//1、通过对象访问
	Person p3;
	cout << p3.mA << endl;
	//2、通过类名访问
	cout << Person::mA << endl;
	//cout << Person::mB << endl;私有静态成员变量无法在类外访问

}

void test03()
{
	//静态成员函数的两种访问方式
	//1、通过对象访问
	Person p4; 
	p4.func();
	//2、通过类名访问
	Person::func();
}

int main()
{
	//test01();
	//test02();
	test03();
}
