#include <iostream>
using namespace std;

//1�����캯���ķ���͵���
//���࣬�����������Ϊ �޲ι���(Ĭ�Ϲ���) �� �вι���
//		�����ͷ����Ϊ ��ͨ���� �� ��������
class Person
{
public:

	int age;
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p1)
	{
		age = p1.age;//������������ϵ����Կ���������
		cout << "Person�Ŀ������캯������" << endl;
	}
	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}
};

//����
void test01()
{
	//Person p1();//���ŷ�,���ǲ��ܼ�(),����()����������Ϊ��һ����������
	//Person p2(10);//���ŷ�
	////�������캯������
	//Person p3(p2);
	//cout << "p2������Ϊ" << p2.age << endl;
	//cout << "p3������Ϊ" << p3.age << endl;
	Person p2 = Person(10);//��ʽ�������вι��죻
	Person p3 = Person(p2);//��������,�������ÿ������캯����ʼ������������Person(p3)���ȼ���person p3;

	//Person(10);//�������󣬵�ǰ��ִ�к�ϵͳ���������յ���������
	//cout << "aaa" << endl;

	Person p4 = 10;//�൱��д��Person p4 = Person(10);

}

int main()
{
	test01();
}