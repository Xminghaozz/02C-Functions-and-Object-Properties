#include <iostream>
using namespace std;

//C++中拷贝函数调用时机通常有三种情况

class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}

	Person(int age)
	{
		this->age = age;
		cout << "Person有参构造函数调用" << endl;
	}
	Person(const Person &p1)
	{
		age = p1.age;
		cout << "Person拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}

	int getAge()
	{
		return age;
	}

private:
	int age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);

	cout << "p2的年龄为" << p2.getAge() << endl;//20
}

//2、值传递的方式给函数参数传值
void doWork(Person p3)
{

}

void test02()
{
	Person p3;
	doWork(p3);
}
//3、以值的方式返回局部对象

Person doWork2()
{
	Person p4;
	return Person(p4);
}

void test03()
{
	Person p5 = doWork2();
}
int main()
{
	//test01();
	//test02();
	test03();
}