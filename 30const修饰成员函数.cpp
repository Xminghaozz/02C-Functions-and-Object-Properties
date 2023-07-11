#include<iostream>
using namespace std;
//常函数
class Person
{
public:
	//this指针的本质是指针常量，指针的指向是不可以修改的
	//就相当于Person *const this;
	//在成员函数后面加const修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const//加个const就不允许修改了
	{
		this->m_b = 100;
		//this = NULL;this指针是不可以修改指针的指向的
	}
	int m_a;
	mutable int m_b;//加了mutable修饰的特殊变量，即使在常函数,常对象中，也可以修改这个值

	void func()
	{
		m_a = 100;//在普通成员函数中是可以修改的
	}
};
void test()
{
	Person P;
	P.showPerson();
}
//常对象
void test1()
{
	const Person p;//在对象前加const，变为常对象
	//p.m_a = 100;
	p.m_b = 100;
	//常对象只能调用常函数 
	p.showPerson();
	//p.func();常对象不能调用普通成员函数，因为普通成员函数可以修改属性。

}
int main(void)
{
	test();
	system("pause");
	return 0;
}

