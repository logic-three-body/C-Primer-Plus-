#define _CRT_SECURE_NO_WARNINGS //put in first line
#include<iostream>
#include<cstring>
/*************  4.8.4 : use "new" create dynamic structure*******************/
using namespace std;
char*getName();
int main()
{
	char*name;//no storage
	
	name = getName();
	cout << name << " at " << (int*)name << "\n";
	delete[]name;//memory freed again

	name = getName();//reuse freed memory
	cout << name << " at " << (int*)name << endl;
	delete[]name;

	name = getName();//reuse freed memory
	cout << name << " at " << (int*)name << endl;
	delete[]name;

	system("pause");
}
char*getName()
{
	char temp[80];
	
	cout << "Enter last name \n";//temporary
	cin >> temp;
	char*pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);//copy string into smaller space

	return pn;

}
