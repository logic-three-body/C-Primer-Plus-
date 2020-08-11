#include<iostream>
#include"stock2.h"

const int STKS = 7;

int main()
{
	Stock stocks[STKS] = {
		Stock("NanoSmart",12,20.0),
		Stock("Boffo Objects",200,2.0),
		Stock("Monolithic",130,3.25),
		Stock("FLEEP",60,6.5),
		Stock()

	};

	cout << "Stock holdings:\n";

	int st;
	for (st = 0; st < STKS; st++)
	{
		stocks[st].show();


	}

	//set pointer to first element
	/*const Stock*top = &stocks[0];*/
	const Stock*top = stocks;
	for (st = 1; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}
	//now top points to the most valuable holding
	cout << "\nMost valuable holding:\n";
	/*top->show();*/
	top->show();
	return 0;
}