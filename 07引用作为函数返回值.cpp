#include <iostream>
using namespace std;

//�����������ķ���ֵ
	//1����Ҫ���ؾֲ����������á�
	

int & test01()
{
	int a1 = 10;//�ֲ�����a1,�����ջ��,�����static���Σ�main�������ú�����������
	//static int a1 =10;
	return a1;
}

int& test02()
{
	static int a2 = 10;
	return a2;
}

int main()
{
	
	int& ref = test01(); 
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;

	//2���������ÿ�����Ϊ��ֵ
	test02() = 20; //����������ķ���ֵΪ���ã������ĵ��ÿ�����Ϊ��ֵ	
	int& ref02 = test02();//����static���ε����÷���ֵ�����������
	cout << "ref02=" << ref02 << endl;
	cout << "ref02=" << ref02 << endl;

}