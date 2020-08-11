#include<iostream>
using namespace std;
void show();
void report();
void comfort();
const int N = 5;
int main()
{
	show();
	char choice;
	cin >> choice;
	while (choice != 'Q'&&choice!='q')
	{
		switch (choice)
		{
		case 'A':
		case 'a':cout << "\a\n";
			break;		
		case 'B':
		case 'b':report();
			break;
		case 'C':
		case 'c':cout << "Boss here!\n";
			break;
		case 'D':
		case 'd':comfort();
			break;
		default:
			cout << "F**kyou\n\a";
		}
		show();
		cin >> choice;
	}
	cout << "Bye!\n\a";
	return 0;
}
void show()
{
	cout << "Enter 1,2,3,4,5...\n"
		"a)alarm			b)report\n"
		"e)alibi			d)comfort\n"
		"c)quit\n			";
}
void report()
{
	cout << "The situation is fine\n\a";
}
void comfort()
{
	cout << "Good job!\n";
}