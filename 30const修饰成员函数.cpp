#include<iostream>
using namespace std;
//������
class Person
{
public:
	//thisָ��ı�����ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//���൱��Person *const this;
	//�ڳ�Ա���������const���ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const//�Ӹ�const�Ͳ������޸���
	{
		this->m_b = 100;
		//this = NULL;thisָ���ǲ������޸�ָ���ָ���
	}
	int m_a;
	mutable int m_b;//����mutable���ε������������ʹ�ڳ�����,�������У�Ҳ�����޸����ֵ

	void func()
	{
		m_a = 100;//����ͨ��Ա�������ǿ����޸ĵ�
	}
};
void test()
{
	Person P;
	P.showPerson();
}
//������
void test1()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_a = 100;
	p.m_b = 100;
	//������ֻ�ܵ��ó����� 
	p.showPerson();
	//p.func();�������ܵ�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸����ԡ�

}
int main(void)
{
	test();
	system("pause");
	return 0;
}

