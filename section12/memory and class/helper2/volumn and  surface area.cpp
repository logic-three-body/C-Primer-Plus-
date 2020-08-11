#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const double PI = acos(-1.0);
struct point//Բ��
{
	double x;
	double y;
};
class ThreeDimShape {

public:

	ThreeDimShape() {}

	virtual double area() = 0;

	virtual void input() = 0;

	virtual double volume() = 0;

	virtual ~ThreeDimShape() {}

};
class Cylinder :public ThreeDimShape
{
private:
	double a, b;
	//double x, y;//����Բ��
	point round;


public:
	void input();
	double area();
	double volume();
};
void Cylinder::input()
{
	cout << "������Բ�������Բ��Բ��" << endl;
	cin >> round.x >> round.y;
	cout << "������Բ�������뾶��Բ�����" << endl;
	cin >> a >> b;
}

double Cylinder::area()
{
	return (2 * PI*a*a + 2 * PI*a*b);
}

double Cylinder::volume()
{
	return (PI*a*a*b);
}

class Ball :public ThreeDimShape
{
private:
	double a;
	point round;
public:
	void input();
	double area();
	double volume();
};

void Ball::input()
{
	cout << "����������" << endl;
	cin >> round.x >> round.y;
	cout << "����������뾶" << endl;
	cin >> a;
}

double Ball::area()
{
	return 4.0*PI*a*a;
}

double Ball::volume()
{
	return 4.0 / 3.0*PI*a*a*a;
}

int main()
{
	Cylinder cyl;
	cout << "������Բ���������" << endl;
	cyl.input();
	cout << "����Բ�������..." << endl;
	cout << "���Ϊ" << cyl.area() << endl;
	cout << "����Բ�������" << endl;
	cout << "���Ϊ" << cyl.volume() << endl;
	Ball bal;
	cout << "���������������" << endl;
	bal.input();
	cout << "�����������..." << endl;
	cout << "���Ϊ" << bal.area() << endl;
	cout << "����Բ�������" << endl;
	cout << "���Ϊ" << bal.volume() << endl;
	return 0;
}
