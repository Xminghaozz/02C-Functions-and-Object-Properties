#include <iostream>
using namespace std;

class Circle
{
private:
	double r;//圆的半径
	double x;//圆心x坐标
	double y;//圆心y坐标

public:
	void setR(double r)
	{
		this->r = r;
	}

	void setX(double x)
	{
		this->x = x;
	}

	void setY(double y)
	{
		this->y = y;
	}

	double getR()
	{
		return r;
	}

	double getX()
	{
		return x;
	}

	double getY()
	{
		return y;
	}
};

class Point
{
private:
	double a;//点的横坐标
	double b;//点的纵坐标

public:
	double getA()
	{
		return a;
	}

	double getB()
	{
		return b;
	}

	void setA(double a)
	{
		this->a = a;
	}

	void setB(double b)
	{
		this->b = b;
	}
	double result(Circle &c)
	{
		return (((a - c.getX()) * (a - c.getX()) + (b - c.getY()) * (b - c.getY())));

	}
};

int main()
{
	Circle c;
	c.setR(1);
	c.setX(0);
	c.setY(0);

	Point p;
	p.setA(0);
	p.setB(0);

	double result = p.result(c);
	cout << result << endl;
}