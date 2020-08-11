#include<iostream>
long double probablitity(unsigned num, unsigned picks);
using namespace std;
int main()
{
	double total, choices;
	cout << "Enter total choices and the picks\n";
	while (cin >> total >> choices && choices <= total)
	{
		cout << "Chances are " << probablitity(total, choices);  //computing odds
		cout << " of wins\n\a";
		cout << "Next to guess or quit\n";
	}
	cout << "F**k" << endl;
	return 0;
};
long double probablitity(unsigned num, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p = 0;

	for (n = num, p = picks; p > 0; n--, p--)
	{
		result *= n / p;
	}
	return result;
}
