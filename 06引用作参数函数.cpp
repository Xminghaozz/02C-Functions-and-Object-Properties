#include <iostream>
using namespace std;

//值传递
void mySwap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "\tb=" << b << endl;

}

//地址传递
void mySwap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "*a=" << *a << "\t*b=" << *b << endl;

}

//引用传递
void mySwap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "\tb=" << b << endl;

}

int main()
{
	int a{ 10 };
	int b{ 20 };
	cout << "值传递" << endl;
	//mySwap1(a, b);
	cout << "a=" << a << "\tb=" << b << endl;

	cout << "地址传递" << endl;
	//mySwap2(&a, &b);
	cout << "a=" << a << "\tb=" << b << endl;

	cout << "引用传递" << endl;
	int& c = a;
	int& d = b;
	mySwap3(c,d);//也可以直接写成mySwap(&a, &b)此时形参和实参操作相同的内存
	cout << "a=" << a << "\tb=" << b << endl;

	//总结：通过引用参数产生的效果和地址传递是一样的，引用的语法更加清晰 

}