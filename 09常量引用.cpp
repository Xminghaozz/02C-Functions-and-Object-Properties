#include <iostream>
using namespace std;

void showValue(const int& val)
{
	//val = 20;��const���޷��޸�
	cout << "val=" << val << endl;
}

int main()
{
	//�������ã�ʹ�ó��������������βΣ���ֹ������ı�ʵ�ε�ֵ
	int a = 10;
	//������ǰ����const�󣬱������Ὣ�����޸�Ϊint temp = 10;const int & ref = temp;
	const int& ref = 10;//��������һ��Ϸ����ڴ�ռ�
	//ref = 20;����const���Ϊֻ�����������޸�ֵ��
	showValue(a);
}