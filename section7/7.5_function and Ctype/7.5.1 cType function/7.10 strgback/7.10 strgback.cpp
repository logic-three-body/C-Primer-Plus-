#include<iostream>
char*buildstr(char c, int n);  //prototype
using namespace std;
int main()
{
	int times;
	char ch;

	cout << "Enter a char\n";
	cin >> ch;
	cout << "Enter a integer\n";
	cin >> times;
	char*ps = buildstr(ch, times);
	cout << ps << endl;
	delete[]ps;
	return 0;
}

//bulid a str made of n many chars
char*buildstr(char c, int n)  //prototype
{
	char*pstr = new char[n + 1];
	pstr[n] = 0;
	//while (n-- > 0) pstr[n] = c;//fill behind to fore
	int i = 0;
	while (i < n) //fill ahead to bottom
	{
	//cout << pstr[i];
	cin >> pstr[i++];
	//cout << pstr[i];
	}
		
	return pstr;
}