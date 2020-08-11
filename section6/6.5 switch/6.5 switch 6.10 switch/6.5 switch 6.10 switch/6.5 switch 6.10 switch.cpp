#include<iostream>
using namespace std;
void show();
void report();
void comfort();
const int N = 5;
int main()
{
	show();
	int choice;
	cin >> choice;
	while (choice != N)
	{
		switch (choice)
		{
		case 1:cout << "\a\n";
			break;
		case 2:report();
			break;
		case 3:cout << "Boss here!\n";
			break;
		case 4:comfort();
			break;
		default:
			cout<<"F**kyou\n\a";
		}
		//break;
		show();
		cin >> choice;
	}
	cout << "Bye!\n\a";
	return 0;
}
void show()
{
	cout << "Enter 1,2,3,4,5...\n"
		"1)alarm			2)report\n"
		"3)alibi			4)comfort\n"
		"5)quit\n			";
}
void report()
{
	cout << "The situation is fine\n\a";
}
void comfort()
{
	cout<<"Good job!\n";
}