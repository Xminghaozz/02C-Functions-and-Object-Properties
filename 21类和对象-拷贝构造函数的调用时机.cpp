#include <iostream>
using namespace std;

//C++�п�����������ʱ��ͨ�����������

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}

	Person(int age)
	{
		this->age = age;
		cout << "Person�вι��캯������" << endl;
	}
	Person(const Person &p1)
	{
		age = p1.age;
		cout << "Person�������캯������" << endl;
	}
	~Person()
	{
		cout << "Person������������" << endl;
	}

	int getAge()
	{
		return age;
	}

private:
	int age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);

	cout << "p2������Ϊ" << p2.getAge() << endl;//20
}

//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p3)
{

}

void test02()
{
	Person p3;
	doWork(p3);
}
//3����ֵ�ķ�ʽ���ؾֲ�����

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