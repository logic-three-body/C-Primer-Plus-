//cubes. cpp - - regular and reference arguments
#include <iostream>
double cube(double a);
double refcube(double &ra);
double refcube2(const double &ra);
double refcube3(const double && ra);
int main()
{
	using namespace std;
	double x = 3.0;
	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x << endl;


	x=refcube2(x+10);
	cout << "x=" << x << endl;
	x = refcube2(3);
	cout << "x=" << x << endl;
	long a = 4.7;
	a=refcube2(a+x);
	cout << "a=" << a << endl;

	//rightvalue reference
	double && rref = sqrt(36.00); // not allowed for double &
	double j = 15.0;
	double && jref = 2.0* j + 18.5;
	// not allowed for double &
		cout << rref << '\n';
	// display 6.0
		cout << jref << '\n';
	//display 48 .5;
		++jref;
		cout << jref << '\n';
		cout << j << endl;
		j = refcube3(a + x);
		cout << j << endl;

	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}

double refcube(double &ra)
{
	ra *= ra * ra;
	return ra;
}

double refcube2(const double & ra)
{
	return ra;
}

double refcube3(const double && ra)
{
	return ra;
}
