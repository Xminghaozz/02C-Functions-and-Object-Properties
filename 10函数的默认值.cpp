#include <iostream>
using namespace std;

int add(int a = 0, int b = 1)//函数的默认参数，参数=默认值，如果我们没有传入数据就使用默认值
{
	return a + b;
}

//注意：
//
//①默认值必须放在右边。也就是说，如果某个位置有了默认参数，那么这个位置的后面的参数必须都有默认值
//
//int test(int a, int b = 10, int c);//err
//②声明和实现，有且只能有一个有默认参数。否则可能出现二义。

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