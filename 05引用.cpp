#include <iostream>
using namespace std;

//���ã�����������������﷨ ��������&���� = ԭ��
//ע�����1�����ñ����ȳ�ʼ����һ����ʼ�������ò����Ա��ı�

int main()
{
	int a1 = 10;
	int a2{ 100 };
	//��������
	//int &b1;����
	int& b1 = a1;
	cout << "a1=" << a1 << endl;
	cout << "b1=" << b1 << endl;
	//���ÿ��Ըı�ԭֵ
	b1={ 100 };
	b1 = a2;//������ֵ����
	//&b1 = a2;����
	cout << "a1=" << a1 << endl;
	cout << "b1=" << b1 << endl;
}