#include <iostream>
using namespace std;

void showValue(const int& val)
{
	//val = 20;加const后无法修改
	cout << "val=" << val << endl;
}

int main()
{
	//常量引用，使用场景：用来修饰形参，防止误操作改变实参的值
	int a = 10;
	//在引用前加上const后，编译器会将代码修改为int temp = 10;const int & ref = temp;
	const int& ref = 10;//必须引用一块合法的内存空间
	//ref = 20;加入const后变为只读，不可以修改值了
	showValue(a);
}