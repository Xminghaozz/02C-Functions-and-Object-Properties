#include <iostream>
using namespace std;

int add(int a = 0, int b = 1)//������Ĭ�ϲ���������=Ĭ��ֵ���������û�д������ݾ�ʹ��Ĭ��ֵ
{
	return a + b;
}

//ע�⣺
//
//��Ĭ��ֵ��������ұߡ�Ҳ����˵�����ĳ��λ������Ĭ�ϲ�������ô���λ�õĺ���Ĳ������붼��Ĭ��ֵ
//
//int test(int a, int b = 10, int c);//err
//��������ʵ�֣�����ֻ����һ����Ĭ�ϲ�����������ܳ��ֶ��塣

int main()
{
	int a = 10;
	int b = 20;
	int result1 = add(a, b);//30
	int result2 = add(a);//11
	int result3 = add(b);//21
	int result4 = add();//1

	cout << "result1 = " << result1 << endl;
	cout << "result2 = " << result2 << endl;
	cout << "result3 = " << result3 << endl;
	cout << "result4 = " << result4 << endl;


}