#define _CRT_SECURE_NO_WARNINGS //put in first line
#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	short tel[20];
	cout << tel << endl;
	cout << &tel << endl;
	short*pas[20];
	cout<<sizeof(pas)<<endl;
	cout << sizeof(tel) << endl;
	short(*pav)[20]=&tel;
	cout << pav << endl;	
	const int N = 100;
	int tab[N];
	for (int i = 0; i < N; i++)
		tab[i] = i;
	int*pt = tab;
	int*pv = &tab[99];
	pt += 1;
	pv -= 1;
	int diff = pt - pv;
	int diff2 = *pv - *pt;
	cout << "diff=" << diff << endl;
	cout << "diff2=" << diff2 << endl;
	cout << "********************************" << endl;

	char animal[20] = "bear";
	const char*bird = "wren";
	char*ps;

	cout << animal << " and " << bird << "\n";
	//cout << ps << "\n";
	cout << "Enter a animal : ";
	cin >> animal;
	//cin >> ps;

	ps = animal;
	cout << ps << "!\n";//the under code is the same
	/*cout << animal << endl;*/

	cout << "Before using strcpy():\n";
	cout << animal << " at " << (double*)animal << endl;
	cout << ps << " at " << (unsigned short*)ps << endl;
	cout << ps << " at " << (char*)ps << endl;

	ps = new char[strlen(animal) + 1]; //create a new storage
	strcpy(ps,animal); //copy string to new storage
	cout << "After using strcpy():\n\a";
	cout << animal << " at " << (double*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete[] ps;
	system("pause");
}