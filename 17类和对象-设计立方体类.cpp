#include <iostream>
using namespace std;

class Cube
{
private:
	//立方体私有属性，长宽高
	double Long;
	double High;
	double Wide;

public:
	//行为
	double getLong()
	{
		return Long;
	}

	double getHigh()
	{
		return High;
	}

	double getWide()
	{
		return Wide;
	}

	void setLong(double Long)
	{
		this->Long = Long;
	}

	void setHigh(double High)
	{
		this->High = High;
	}

	void setWide(double Wide)
	{
		this->Wide = Wide;
	}

	double getS()//获取表面积
	{
		double S = (Wide * Long + Long * High + High * Wide) * 2;
		return S;
	}

	double getVolume()//获取体积
	{
		double volume = Wide * Long * High;
		return volume;
	}

};

double getS1(double l, double w, double h)
{
	return (l * w + l * h + w * h) * 2;
}

double getV1(double l, double w, double h)
{
	return l*w*h;
}

int main()
{
	Cube cube1;
	cube1.setHigh(2);
	cube1.setLong(2.5);
	cube1.setWide(1.6);
	int S = 0;
	int Volume = 0;
	S = cube1.getS();
	Volume = cube1.getVolume();

	int S1 = 0;
	int Volume1 = 0;
	S1 = getS1(2, 2.5, 1.6);
	Volume1 = getV1(2, 2.5, 1.6);
	cout << "S=" << S << " S1=" << S1 << endl;
	cout << "V=" << Volume << " V1=" << Volume1 << endl;

}