#include<iostream>
using namespace std;

//������ռλ����
//�﷨���������� ������ ��������{}

void test1(int a, int)//���int����ռλ���ã����������ֵ���ܵ���
{
	cout << "test1 haha" << endl;
}

void test2(int a, int b = 10)//ռλ����������Ĭ��ֵ��������������û��ʲôʵ������
{
	cout << "test2 haha" << endl;
}

int main()
{
	//test1(1);//error��ռλ����������ֵ
	test1(1, 2);
	test2(1);
	test2(1, 2);
}