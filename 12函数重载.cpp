#include <iostream>
using namespace std;

//��������
//���ã�������������ͬ����߸�����
//����������
//1��ͬһ��������
//2������������ͬ
//3���������Ͳ�ͬ/������ͬ/˳��ͬ
//�����ķ���ֵ���Ͳ�����Ϊ�������ص�����

// ��ȫ��������
void test1()
{
	cout << "����test1()����" << endl;
}

void test2(int a)
{
	cout << "����test2(int a)����" << endl;
}

void test3(int a, int b)
{
	cout << "����test3(int a, int b)����" << endl;
}

void test4(int a, double b)
{
	cout << "����test4(int a, double b)����" << endl;
}

void test5(double a, int b)
{
	cout << "����test5(double a ,int b)����" << endl;
}

int main()
{
	test1();
	test2(1);
	test3(1, 2);
	test4(1, 3.14);
	test5(3.14, 1);
}