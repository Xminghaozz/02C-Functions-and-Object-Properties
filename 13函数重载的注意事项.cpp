# include<iostream>
using namespace std;

//�������ص�ע������
//1��������Ϊ������������,��const�����ͷ����仯������ȷ�ĺ�������
void func1(int& a)//�ֲ����������ջ�����߶��� a�޷����մ洢�ڳ�������10
{
	cout << "func1(int &a)����" << endl;
}

void func1(const int& a)
{
	cout << "func1(const int &a)����" << endl;
}

//2��������������Ĭ�ϲ���
void func2(int a, int b =10)//
{
	cout << "func2(int a, int b)����" << endl;
}

void func2(int a)
{
	cout << "func2(int a)����" << endl;
}

int main()
{
	int a = 10;
	func1(a);
	const int a1 = 10;
	func1(a1);//Ҳ����ֱ�Ӵ�һ������ ��func1(10)

	//func2(a);������������������Ĭ�ϲ�������ֶ����ԣ�Ҫ���������������
}