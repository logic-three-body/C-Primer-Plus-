#include<iostream>


#define SQUARE(X) X*X//a macro

#define SQUARE1(X) (X)*(X)//a macro
inline double square(double x)
{
	return x * x;
}
int main()
{
	using namespace std;

	double a = square(5.0),
		b = square(4.5 + 7.5),
		c=13;

	cout << "a= " << a << " , b = " << b << endl
		<< " c = " << c;
	cout<< " , c squared = " << square(c++) << endl
		<< " Now c = " << c << endl;
	
	a= SQUARE(5),b= SQUARE(4.5 + 7.5),c = 13;
	cout << "Now see the difference of marco with inline\a" << endl;

	cout << "a= " << a << " , b = " << b << endl
		<< " c = " << c;
	cout << " , c squared = " << SQUARE(c++) << endl
		<< " Now c = " << c << endl;


	a = SQUARE1(5), b = SQUARE1(4.5 + 7.5), c = 13;
	cout << "Think marco with inline\a" << endl;

	cout << "a= " << a << " , b = " << b << endl
		<< " c = " << c;
	cout << " , c squared = " << SQUARE1(c++) << endl
		<< " Now c = " << c << endl;
	return 0;



}