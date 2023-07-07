#include <iostream>
using namespace std;

int* funcation()
{
	//new的基本用法
	int* p = new int(10); //返回该数据类型的指针
	return p;
}

void func2() {
	//在堆区创建长度为10的整型数组
	int* arr1 = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = i + 100;
		cout << arr1[i] << endl;
	}
	//释放堆区的数组
	delete[] arr1;
}
int main()
{
	int* p = funcation();
	cout << funcation() << endl;
	cout << *p << endl;
	cout << *p << endl;
	func2();
	delete p;//释放堆区的内存空间，用关键字delete
	cout << *p << endl;//释放内存后会报异常
	return 0;
}
