#include <iostream>
using namespace std;

//�����ǳ����

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age,int height)
	{
		mAge = age;
		mHeight = new int(height);
		cout << "Person���вι��캯������" << endl;
	}
	int mAge;//����
	int* mHeight; //���

	~Person()
	{
		//���������Ὣ�����ڶ������ٵ������ͷ�
	/*	if (mHeight != NULL)
		{
			delete mHeight;
			mHeight = NULL;
		}
		ǳ�������ڵ�������Ҫ����������ǳ�����ᵼ������ָ��ָ��ͬһ���ڴ棬
		�����������ͷ��ڴ�ʱ����ͬһ���ڴ���Ҫ��ɾ�����ε����
		��Ҫ�Լ�������ڶ�����������һ���ڴ�����ͬ����
		*/
		cout << "Person��������������" << endl;
	}
	//������캯��
	Person(const Person& p1)
	{
		cout << "Person��������캯������" << endl;
		mAge = p1.mAge;
		//mHeight = p1.mHeight;������Ĭ��ʵ�ֵ�ǳ��������
		//�Լ�ʵ�ֵ��������
		mHeight = new int(*p1.mHeight);
	}
};

void test01()
{
	Person p1(18,174);
	cout << "p1������Ϊ" << p1.mAge << " ���Ϊ"<<*p1.mHeight<<endl;

	Person p2(p1);
	cout << "p2������Ϊ" << p2.mAge << " ���Ϊ" <<*p2.mHeight << endl;//18 �������ṩ��Ĭ�Ͽ������캯��

}

int main()
{
	test01();
}