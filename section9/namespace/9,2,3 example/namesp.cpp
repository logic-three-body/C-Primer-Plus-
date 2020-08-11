//usenmsp.cpp - -using namespaces
#include <iostream>
#include "namesp.h"
void other(void);
void another(void);
int main(void)
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
	showDebt(golf);
	other();
	another();
	return 0;
}
void other(void)
{
	using std::cout;
	using std::endl;
	//using namespace debts;
	using debts::Person;
	using debts::showDebt;
	using debts::getDebt;
	using debts::Debt;
	using debts::sumDebts;

	using namespace test_per;
	Person dg = { "Doodles", "Glister" };
	pers::showPerson(dg);
	test_per::showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
		getDebt(zippy [i]);
	for (i = 0; i < 3; i ++)
		showDebt(zippy[i]); 
		cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}
void another(void)
{
	using pers::Person;
	Person collector = { "Milo", "Rightshift" };
	pers::showPerson(collector);
	std::cout << std::endl;
}


