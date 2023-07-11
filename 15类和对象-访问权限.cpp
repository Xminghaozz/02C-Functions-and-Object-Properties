#include <iostream>
using namespace std;

//封装的意义二
//
//类在设计时，可以把属性和行为放在不同的的权限下，加以控制
//
//访问权限有三种：
//1.public 公共权限 成员类内类外都可以访问
//2.protected 保护权限 成员类内可以访问，类外不可以访问
//3.private 私有权限 成员类内可以访问，类外不可以访问，在继承方面和protected有区别

//C++中struct和class的区别：唯一的区别在于默认的访问权限不同
//struct默认为公共，class默认为私有

class Person
{
public://公共权限
	string name;
	void func()
	{
		name = "张三";
		car = "拖拉机";
		password = "123456";
		cout << name << car << password << endl;//类内可以访问
	}

protected://保护权限
	string car;

private://私有权限
	string password;
};

class C1//默认私有权限
{
	int m1 = 10;
};

struct C2//默认公共权限                                                                            
{
	int m2 = 10;
};

int main()
{
	Person p1;
	p1.name = "李四";
	//p1.car = "奔驰";保护权限，成员类外无法访问
	//p1.password = "1234567";私有权限，成员类外无法访问
	p1.func();
	C1 c1;
	//c1.m1 = 100;//报错，不可访问
	C2 c2;
	c2.m2 = 100;//不报错

}