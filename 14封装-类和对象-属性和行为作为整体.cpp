#include <iostream>
#include <cstdlib>
using namespace std;

//4.1.1封装的意义
//<1>封装是C++面向对象三大特性之一
//
//<2>封装的意义：
//
//a.将属性和行为作为一个整体，表现生活中的事物；
//
//b.将属性和行为加以权限控制；
//
//封装意义一：
//
//? 在设计类的时候，将属性和行为作为一个整体，表现生活中的事物；
//
//语法：class 类名{ 访问权限：属性 / 行为}；

#define PI 3.14
//设计一个圆类，求圆的周长

class Circle
{
	//访问权限
public://公共权限
	//属性
	double r;
	//行为
	double circumference()
	{
		return r * PI * 2;
	}

};

class Student
{
public:
	//类中的属性和行为我们统一称为成员
	//属性也称为成员变量
	//行为也称为成员函数或成员方法
	string name;
	int id;

	void showInfo()
	{
		cout << "学生姓名是" << name << " 学生学号" << id << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		this->name = name;
	}

	void setId(int id)
	{
		this->id = id;
	}
};

int main()
{
	Circle circle1;//创建对象，实例化
	circle1.r = 10;//给对象的属性赋值
	cout << "圆的周长为" << circle1.circumference() << endl;

	Student stu1;
	stu1.setName("薛明昊");
	stu1.setId(1);
	stu1.showInfo();

}