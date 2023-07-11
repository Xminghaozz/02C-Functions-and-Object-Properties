#include <iostream>
using namespace std;

//在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上

class Person
{
public:
	int mA;//普通成员变量,属于类的对象上，每添加一个普通成员变量，类的对象的所占空间就加4
	int mC;
	static int mB;//静态成员变量，不属于类的对象上，所以添加后不会使所占空间增加

	//成员函数不属于类的对象上，所以添加后不会使所占空间增加
	void func()
	{
		cout << "类的成员函数" << endl;
	}
};

int Person::mB = 100;

void test01()
{
	Person p1;
	//空对象占用内存空间为：1
	//C++编译器会给每一个空对象也分配1个字节的空间，是为了区分空对象占用内存的位置
	//每个空对象也应该有一个独一无二的内存
	cout << "size of p1= " << sizeof(p1) << endl;
}

void test02()
{
	Person p2;
	cout << "size of p2= " << sizeof(p2) << endl;//所占内存空间：4
}

int main()
{
	//test01();
	test02();
}