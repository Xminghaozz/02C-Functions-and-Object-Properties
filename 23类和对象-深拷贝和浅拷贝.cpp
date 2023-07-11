#include <iostream>
using namespace std;

//深拷贝与浅拷贝

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age,int height)
	{
		mAge = age;
		mHeight = new int(height);
		cout << "Person的有参构造函数调用" << endl;
	}
	int mAge;//年龄
	int* mHeight; //身高

	~Person()
	{
		//析构函数会将我们在堆区开辟的数据释放
	/*	if (mHeight != NULL)
		{
			delete mHeight;
			mHeight = NULL;
		}
		浅拷贝存在的问题需要深拷贝来解决，浅拷贝会导致两个指针指向同一个内存，
		在析构函数释放内存时出现同一块内存需要被删除两次的情况
		需要自己用深拷贝在堆区重新申请一块内存存放相同数据
		*/
		cout << "Person的析构函数调用" << endl;
	}
	//深拷贝构造函数
	Person(const Person& p1)
	{
		cout << "Person的深拷贝构造函数调用" << endl;
		mAge = p1.mAge;
		//mHeight = p1.mHeight;编译器默认实现的浅拷贝代码
		//自己实现的深拷贝代码
		mHeight = new int(*p1.mHeight);
	}
};

void test01()
{
	Person p1(18,174);
	cout << "p1的年龄为" << p1.mAge << " 身高为"<<*p1.mHeight<<endl;

	Person p2(p1);
	cout << "p2的年龄为" << p2.mAge << " 身高为" <<*p2.mHeight << endl;//18 编译器提供了默认拷贝构造函数

}

int main()
{
	test01();
}