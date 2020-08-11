#include<iostream>

int main()
{
	using namespace std;

	double prices[5] = { 4.99,10.99,6.89,7.9,1.4 };

	for (double x : prices)
		cout << x << endl;

	cout << "***************************************************" << endl;

	for (double &x : prices)
	{
		x = x * 0.8;
		cout << x << endl;
	}

	cout << "***************************************************" << endl;

	for (int x : {1, 2, 3, 4, 4})
		cout << x << endl;

	
	return 0;

}