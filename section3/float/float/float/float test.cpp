#include<iostream>
#include<cfloat>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield );//fixed point
	float i = 2.52e+3,z=9.33E-7,x=-22e40;
	long double z1 = 9.33E-7;
	cout << "i=" << i << "  " << "z=" << z << "  " <<"x="<<x<< endl;
	cout << "z1(ld)= " << z1 << endl;
	if (-i <-z)  cout << "true" << endl;
	cout << "7/5f=" << (float)7 / 5 << endl;
	const int code = 66;
	char c3(code);
	cout << "c3=" << code << endl;
	cout << "code=" << sizeof(code) << endl;
	cout << "c3=" << sizeof(c3) << endl;
	cout << "char=" << sizeof(char) << endl;
	int x2 = 66;
	char c4(x2);
	int x3 = 77;
	char c6( x3 );
	char c5=(x3);
	int r1 = 100;
	long r2  { r1 };
	/*char c5 = { x3 };*/ //need contracted convertion this type"{}"is more accurate 
	cout << "c5=" << c5 << " " << "c6=" << c6 << endl;
	cout << "c4=" << c4 << endl;
	cout << "r2=" << r2<< endl;

	char ch = 'A';
	cout << "ch is " << int(ch) << endl;
	cout << "ch is " << static_cast<int>(ch) << endl;



	float test1=0, test2=0;
	double test3=0, test4=0;
	cout << "Enter these num\n";
	//cin >> test1, test2,test3,test4;
	//cout << test1 << test2 << test3 << test4;
	cin >> test1;
	cin >> test2;
	cin >> test3;
	cin >> test4;
	cout << "test1-test2=" << test1 - test2 << endl;
	cout << "test3-test4=" << test3 - test4 << endl;
	cout << "test1+test2=" << test1 + test2 << endl;
	cout << "test3+test4=" << test3 + test4 << endl;
	cout << "7/5f=" << (float)7 / (float)5 << endl;
	system("pause");

}