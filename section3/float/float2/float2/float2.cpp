#include<iostream>
#include<cfloat>
int main()
{
	using namespace std;
	
	cout.setf(ios_base::fixed, ios_base::floatfield );//fixed point
	float i = 2.52e+3,z=9.33E-40,x=-22e4;
	cout << "i=" << i << "  " << "z=" << z << "  " <<"x="<<x<< endl;
	if (-i <-z)  cout << "true" << endl;
	system("pause");

}