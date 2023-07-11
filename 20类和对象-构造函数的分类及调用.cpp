#include <iostream>
using namespace std;

//1、构造函数的分类和调用
//分类，按参数分类分为 无参构造(默认构造) 和 有参构造
//		按类型分类分为 普通构造 和 拷贝构造
class Person
{
public:

	int age;
	//构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p1)
	{
		age = p1.age;//将传入的人身上的属性拷贝我身上
		cout << "Person的拷贝构造函数调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

//调用
void test01()
{
	//Person p1();//括号法,但是不能加(),加了()编译器会认为是一个函数声明
	//Person p2(10);//括号法
	////拷贝构造函数调用
	//Person p3(p2);
	//cout << "p2的年龄为" << p2.age << endl;
	//cout << "p3的年龄为" << p3.age << endl;
	Person p2 = Person(10);//显式法，调有参构造；
	Person p3 = Person(p2);//拷贝构造,不能利用拷贝构造函数初始化匿名对象，如Person(p3)，等价于person p3;

	//Person(10);//匿名对象，当前行执行后，系统会立即回收掉匿名对象
	//cout << "aaa" << endl;

	Person p4 = 10;//相当于写了Person p4 = Person(10);

}

int main()
{
	test01();
}