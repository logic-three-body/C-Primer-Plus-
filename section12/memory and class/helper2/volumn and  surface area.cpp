#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const double PI = acos(-1.0);
struct point//圆心
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
	//double x, y;//底面圆心
	point round;


public:
	void input();
	double area();
	double volume();
};
void Cylinder::input()
{
	cout << "请输入圆柱体底面圆的圆心" << endl;
	cin >> round.x >> round.y;
	cout << "请输入圆柱体底面半径和圆柱体高" << endl;
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
	cout << "请输入球心" << endl;
	cin >> round.x >> round.y;
	cout << "请输入球体半径" << endl;
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
	cout << "请输入圆柱体各参数" << endl;
	cyl.input();
	cout << "计算圆柱体面积..." << endl;
	cout << "面积为" << cyl.area() << endl;
	cout << "计算圆柱体体积" << endl;
	cout << "体积为" << cyl.volume() << endl;
	Ball bal;
	cout << "请输入球体各参数" << endl;
	bal.input();
	cout << "计算球体面积..." << endl;
	cout << "面积为" << bal.area() << endl;
	cout << "计算圆柱体体积" << endl;
	cout << "体积为" << bal.volume() << endl;
	return 0;
}
