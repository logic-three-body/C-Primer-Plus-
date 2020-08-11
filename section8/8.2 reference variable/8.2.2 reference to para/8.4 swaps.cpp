//swaps.cpp -- swapping with references and with pointers
#include <iostream>
void swapr(int & a, int & b);
// a, b are aliases for ints
void swapp(int * p, int * q);
// p, q are addresses of ints
void swapv(int a, int b);
// a, b are new variables
int main() 
{
	using namespace std;
	int walletl = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << walletl;
	cout << " wallet2 = $" << wallet2 << endl;
	cout << "Using references to swap contents: \n";
	swapr(walletl, wallet2); // pass variables
	cout << "wallet1 = $" << walletl;
	cout << " wallet2 = $" << wallet2 << endl;
	cout << "Using pointers to swap contents again: \n";
	swapp(&walletl, &wallet2); // pass addresses of variables
	cout << "wallet1 = $" << walletl;
	cout << " wallet2 = $" << wallet2<<endl;
	cout << "Trying to use passing by value: \n";
	swapv(walletl, wallet2); // pass values of variables
	cout << "walletl = $" << walletl<<endl;
	cout << " wallet2 = $" << wallet2 << endl;
	return 0;
}

void swapr(int & a, int & b) 
{
	// use references
	int temp;
	temp = a;
	// use a, b for values of variables
		a = b;
	b = temp;
}

void swapp(int*p, int * q) // use pointers
{
int temp;
temp = *p;
// use *p, *q for values of variables
*p = *q;
*q = temp;
}

void swapv(int a, int b)//try using values
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}