#include <iostream>
using namespace std;

int* funcation()
{
	//new�Ļ����÷�
	int* p = new int(10); //���ظ��������͵�ָ��
	return p;
}

void func2() {
	//�ڶ�����������Ϊ10����������
	int* arr1 = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = i + 100;
		cout << arr1[i] << endl;
	}
	//�ͷŶ���������
	delete[] arr1;
}
int main()
{
	int* p = funcation();
	cout << funcation() << endl;
	cout << *p << endl;
	cout << *p << endl;
	func2();
	delete p;//�ͷŶ������ڴ�ռ䣬�ùؼ���delete
	cout << *p << endl;//�ͷ��ڴ��ᱨ�쳣
	return 0;
}
