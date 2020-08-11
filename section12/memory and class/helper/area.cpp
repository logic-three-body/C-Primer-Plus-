#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const double PI = acos(-1.0);
class Shape
{
public:
	Shape() :x(0), y(0) {};
	Shape(double x_in, double y_in);
	~Shape();
	double getX() { return x; };
	double getY() { return y; };
private:
	double x;
	double y;
};

Shape::Shape(double x_in, double y_in) :x(x_in), y(y_in)
{
}

Shape::~Shape()
{
}

class Circle :public Shape
{
public:
	Circle() :radius(0) {};
	Circle(double r);
	~Circle();
	virtual void getArea() {
		double area = 0;
		area = PI * radius*radius;
		cout << "The area is " << area << endl;
	}

private:
	double radius;
};

Circle::Circle(double r) :radius(r)
{
}

Circle::~Circle()
{
}

class Square :public Shape
{
public:
	Square():pointX(0),pointY(0) {};
	Square(double x, double y, double X, double Y);
	~Square();
	virtual void getArea() {
		double lensX, lensY;
		//lensX = pointX * pointX - this->getX()*this->getX();//计算X坐标点间距离
		lensX = pow(pointX-this->getX(), 2);
		//lensY = pointY * pointY - this->getY()*this->getY();//计算y坐标点间距离
		lensY = pow(pointY - this->getY(), 2);
		double lenTotal;
		lenTotal = sqrt(lensX +  lensY);//计算两坐标点间距离
		double area;
		area = 2 * lenTotal*lenTotal;
		cout << "The area is " << area << endl;
	}

private:
	double pointX;
	double pointY;
};

Square::Square(double a, double b, double X, double Y) :pointX(X), pointY(Y), Shape(a, b)
{
}

Square::~Square()
{
}

int main()
{

	//Circle my_round(1);
	//Square my_square(0,0,1,1);

	double r;//圆半径
	double a, b;//中心坐标
	double c, d;//顶点坐标
	cout << "请输入圆半径" << endl;
	cin >> r;
	Circle my_round(r);
	cout << "圆面积如下" << endl;
	my_round.getArea();

	cout << "请分别输入中心点横纵坐标和顶点横纵坐标" << endl;
	cin >> a >> b >> c >> d;
	Square my_square(a, b, c, d);
	cout << "正方形面积如下" << endl;
	my_square.getArea();

	return 0;
}