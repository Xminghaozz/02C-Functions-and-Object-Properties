#include <iostream>
using namespace std;

//��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢��ֻ�зǾ�̬��Ա������������Ķ�����

class Person
{
public:
	int mA;//��ͨ��Ա����,������Ķ����ϣ�ÿ���һ����ͨ��Ա��������Ķ������ռ�ռ�ͼ�4
	int mC;
	static int mB;//��̬��Ա��������������Ķ����ϣ�������Ӻ󲻻�ʹ��ռ�ռ�����

	//��Ա������������Ķ����ϣ�������Ӻ󲻻�ʹ��ռ�ռ�����
	void func()
	{
		cout << "��ĳ�Ա����" << endl;
	}
};

int Person::mB = 100;

void test01()
{
	Person p1;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//C++���������ÿһ���ն���Ҳ����1���ֽڵĿռ䣬��Ϊ�����ֿն���ռ���ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ�
	cout << "size of p1= " << sizeof(p1) << endl;
}

void test02()
{
	Person p2;
	cout << "size of p2= " << sizeof(p2) << endl;//��ռ�ڴ�ռ䣺4
}

int main()
{
	//test01();
	test02();
}