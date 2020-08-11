#include<iostream>
#include"stock01.h"
int main()
{
	{
		cout << "Using constructor to create new objects instead of function aquire()\n";
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();
		Stock stock2 = Stock("Banner", 2, 2.0);
		stock2.show();

		cout << "Asigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1:\n";
		stock1.show();
		cout << "Listing stock2:\n";
		stock2.show();

		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("Naflex", 10, 50.0); //temp object
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done\n";
	}
	return 0;
}