#include <iostream>
#include <cstdlib>
using namespace std;

//4.1.1��װ������
//<1>��װ��C++���������������֮һ
//
//<2>��װ�����壺
//
//a.�����Ժ���Ϊ��Ϊһ�����壬���������е����
//
//b.�����Ժ���Ϊ����Ȩ�޿��ƣ�
//
//��װ����һ��
//
//? ��������ʱ�򣬽����Ժ���Ϊ��Ϊһ�����壬���������е����
//
//�﷨��class ����{ ����Ȩ�ޣ����� / ��Ϊ}��

#define PI 3.14
//���һ��Բ�࣬��Բ���ܳ�

class Circle
{
	//����Ȩ��
public://����Ȩ��
	//����
	double r;
	//��Ϊ
	double circumference()
	{
		return r * PI * 2;
	}

};

class Student
{
public:
	//���е����Ժ���Ϊ����ͳһ��Ϊ��Ա
	//����Ҳ��Ϊ��Ա����
	//��ΪҲ��Ϊ��Ա�������Ա����
	string name;
	int id;

	void showInfo()
	{
		cout << "ѧ��������" << name << " ѧ��ѧ��" << id << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		this->name = name;
	}

	void setId(int id)
	{
		this->id = id;
	}
};

int main()
{
	Circle circle1;//��������ʵ����
	circle1.r = 10;//����������Ը�ֵ
	cout << "Բ���ܳ�Ϊ" << circle1.circumference() << endl;

	Student stu1;
	stu1.setName("Ѧ���");
	stu1.setId(1);
	stu1.showInfo();

}