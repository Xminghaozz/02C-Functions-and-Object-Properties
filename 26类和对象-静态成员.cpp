#include <iostream>
using namespace std;

//��̬��Ա���ڳ�Ա�����ͳ�Ա����ǰ�ӹؼ���static,�з���Ȩ��
//��̬��Ա��Ϊ��

class Person
{
public:
	//1����̬��Ա���������ж�����ͬһ�����ݣ��ڱ���׶η����ڴ棨ȫ������������������
	static int mA;

	//2����̬��Ա���������ж�����ͬһ����������̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	//��̬��Ա����Ҳ�з���Ȩ��
	static void func()
	{
		mA = 300;
		//mC = 300;��̬��Ա�����޷����ʷǾ�̬��Ա�������޷����ֵ������ĸ������mC����
		cout << "static void func����" << endl;
	}
	int mC;
private:
	static int mB;
};
//�������ʼ��
int Person::mA = 100;
int Person::mB = 200;

void test01()
{
	Person p1;
	cout << p1.mA << endl;

	Person p2;
	p2.mA = 200;
	cout << p1.mA << endl;//200 ����ͬһ�����ݣ�p2����,p1���ʸ��ĺ������

}

void test02()
{
	//��̬��Ա���������ַ��ʷ�ʽ
	//1��ͨ���������
	Person p3;
	cout << p3.mA << endl;
	//2��ͨ����������
	cout << Person::mA << endl;
	//cout << Person::mB << endl;˽�о�̬��Ա�����޷����������

}

void test03()
{
	//��̬��Ա���������ַ��ʷ�ʽ
	//1��ͨ���������
	Person p4; 
	p4.func();
	//2��ͨ����������
	Person::func();
}

int main()
{
	//test01();
	//test02();
	test03();
}
