#include<iostream>
using namespace std;
int main()
{
	cout << "*pt1:\n";
	int age = 39;
	const int*pt1 = &age;
	cout << *pt1 << endl;
	age += 1;
	cout << *pt1 << endl;
	cin >> age;
	cout << *pt1 << endl;
	//cin >> *pt1;  //invalid
	//*pt1 += 1;	//invalid
	int year = 3;
	pt1 = &year;
	cout << *pt1 << endl;

	cout << "*pt2:\n";
	const int age2 = 34;
	//int*pt2 = &age2; //invalid
	const int *pt2 = &age2;
	cout << *pt2 << endl;

	cout << "*pt3:\n";
	int age3 = 88;
	int*const pt3 = &age3;
	int year3 = 99;
	//pt3 = &year3; //invalid
	cout << *pt3 << endl;
	return 0;
}