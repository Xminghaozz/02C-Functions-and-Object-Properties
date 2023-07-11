#include <iostream>
using namespace std;
//成员属性设置为私有的优点
//1、将所有成员属性设置为私有，可以自己控制读写权限，通过提供get/set函数
//2、对于写权限，我们可以检测数据的有效性

class Person
{
private:
	string name;
	int age;
	string sex;

public:
	//设置名字，可写
	void setName(string name)
	{
		this->name = name;
	}

	//获取名字，可读
	string getName()
	{
		return name;
	}

	//获取年龄，只读可写，如果想修改，年龄的范围必须在0-100之间
	int getAge()
	{
		//age = 22;
		return age;
	}

	void setAge(int age)
	{
		if (age > 100 || age < 0) 
		{
			age = 0;
			this->age = age;
			cout << "输入年龄有误" << endl;
			return;
		}
		else
		{
			this->age = age;
		}
		
	}

	//设置性别，只写不可读，外界可以修改，但是无法访问
	void setSex(string sex)
	{
		this->sex = sex;
	}
};

int main()
{
	Person p1;
	p1.setName("张四");
	p1.setAge(1000);
	cout << "姓名：" << p1.getName() << endl;
	cout << "年龄：" << p1.getAge() << endl;
	p1.setSex("男");


}