#include<iostream>
#include"stock00.h"
int main()
{
	Stock cat;
	
	
	cat.acquire("Nansmart", 20, 12.50);
	cat.show();
	cat.buy(15,18.125);
	cat.show();
	cat.sell(400, 20.00);
	cat.show();
	cat.buy(300000, 40.125);
	cat.show();
	cat.sell(300000, 0.125);
	cat.show();
	cat.update(200);
	cat.show();
	return 0;
}