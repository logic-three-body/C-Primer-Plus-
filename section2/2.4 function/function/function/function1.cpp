#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	double ar;
	cout << "It's prudent floor ar of my home: ";
	cin >> ar;
	double si;
	cout << "MY Floor is " << ar <<"th"<< endl;
	si = sqrt(ar);
	cout <<"Mine is "<<si<<" th"<< endl;
	double cc;
	cc = pow(ar, si);
	cout << "cc is " << cc << endl;
	int myGuess = rand();
	double myGuess2 = rand();
	cout << "myGuess is " << myGuess<<endl;
	cout << "Another myGuess is " << myGuess2 << endl;
	system("pause");


}