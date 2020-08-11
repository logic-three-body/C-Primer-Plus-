#include<iostream>
//const int Max = 5;
using namespace std;
int main()
{
	using namespace std;
	int Max;
	cout << "Enter the num of your fishes" << endl;
	cin >> Max;
	double *fish = new double[Max];
	cout << "Enter the weight of your fishes.\n"
		<< "You may enter up to " << Max
		<< " fish<q to terminate>.\n"
		<< "fish #1: ";
	int i = 0;
	//get data
	while (i<Max&&cin >> fish[i])
	{
		//cin >> fish[i];
		
		//if (!cin)//input terminated by non-num response
		//{
		//	cin.clear();//reset input
		//	cin.get();//read q
		//}

		if (++i < Max)
			cout << "fish#" << i + 1 << ": ";

	}
	//calculate average
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	//report results
	if (0 == i)
		cout << "No fish\n\a";
	else
		cout << total / i << " = average weight of " << i << " fish\n\a";
	cout << "F**k\n";
	return 0;



}