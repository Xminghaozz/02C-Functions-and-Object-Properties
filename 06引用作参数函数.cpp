#include <iostream>
using namespace std;

//ֵ����
void mySwap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "\tb=" << b << endl;

}

//��ַ����
void mySwap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "*a=" << *a << "\t*b=" << *b << endl;

}

//���ô���
void mySwap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "\tb=" << b << endl;

}

int main()
{
	int a{ 10 };
	int b{ 20 };
	cout << "ֵ����" << endl;
	//mySwap1(a, b);
	cout << "a=" << a << "\tb=" << b << endl;

	cout << "��ַ����" << endl;
	//mySwap2(&a, &b);
	cout << "a=" << a << "\tb=" << b << endl;

	cout << "���ô���" << endl;
	int& c = a;
	int& d = b;
	mySwap3(c,d);//Ҳ����ֱ��д��mySwap(&a, &b)��ʱ�βκ�ʵ�β�����ͬ���ڴ�
	cout << "a=" << a << "\tb=" << b << endl;

	//�ܽ᣺ͨ�����ò���������Ч���͵�ַ������һ���ģ����õ��﷨�������� 

}