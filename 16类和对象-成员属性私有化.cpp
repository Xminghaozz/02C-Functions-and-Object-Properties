#include <iostream>
using namespace std;
//��Ա��������Ϊ˽�е��ŵ�
//1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ�ޣ�ͨ���ṩget/set����
//2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

class Person
{
private:
	string name;
	int age;
	string sex;

public:
	//�������֣���д
	void setName(string name)
	{
		this->name = name;
	}

	//��ȡ���֣��ɶ�
	string getName()
	{
		return name;
	}

	//��ȡ���䣬ֻ����д��������޸ģ�����ķ�Χ������0-100֮��
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
			cout << "������������" << endl;
			return;
		}
		else
		{
			this->age = age;
		}
		
	}

	//�����Ա�ֻд���ɶ����������޸ģ������޷�����
	void setSex(string sex)
	{
		this->sex = sex;
	}
};

int main()
{
	Person p1;
	p1.setName("����");
	p1.setAge(1000);
	cout << "������" << p1.getName() << endl;
	cout << "���䣺" << p1.getAge() << endl;
	p1.setSex("��");


}