#include <iostream>
using namespace std;

//��װ�������
//
//�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ�ĵ�Ȩ���£����Կ���
//
//����Ȩ�������֣�
//1.public ����Ȩ�� ��Ա�������ⶼ���Է���
//2.protected ����Ȩ�� ��Ա���ڿ��Է��ʣ����ⲻ���Է���
//3.private ˽��Ȩ�� ��Ա���ڿ��Է��ʣ����ⲻ���Է��ʣ��ڼ̳з����protected������

//C++��struct��class������Ψһ����������Ĭ�ϵķ���Ȩ�޲�ͬ
//structĬ��Ϊ������classĬ��Ϊ˽��

class Person
{
public://����Ȩ��
	string name;
	void func()
	{
		name = "����";
		car = "������";
		password = "123456";
		cout << name << car << password << endl;//���ڿ��Է���
	}

protected://����Ȩ��
	string car;

private://˽��Ȩ��
	string password;
};

class C1//Ĭ��˽��Ȩ��
{
	int m1 = 10;
};

struct C2//Ĭ�Ϲ���Ȩ��                                                                            
{
	int m2 = 10;
};

int main()
{
	Person p1;
	p1.name = "����";
	//p1.car = "����";����Ȩ�ޣ���Ա�����޷�����
	//p1.password = "1234567";˽��Ȩ�ޣ���Ա�����޷�����
	p1.func();
	C1 c1;
	//c1.m1 = 100;//�������ɷ���
	C2 c2;
	c2.m2 = 100;//������

}