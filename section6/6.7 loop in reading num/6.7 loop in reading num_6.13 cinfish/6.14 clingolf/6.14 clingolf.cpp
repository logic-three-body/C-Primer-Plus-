#include<iostream>
int main()
{
	using namespace std;
	int Max;
	//cin >> Max;
	while (!(cin >> Max))
	{

		cout <<Max << endl;
		cin.clear();//reset input
		while (cin.get() != '\n')
			continue;
		cout << "Please enter a num!" << endl;
	}

	int *golf = new int[Max];
	int i = 0;
	
	//get data
	for (i = 0; i < Max; i++)
	{
		cout << "round#" << i+1  << ": ";
		while (!(cin >> golf[i]))
		{
			cout << golf[i] << endl;
			cin.clear();//reset input
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a num!" << endl;			 
		}
	}
	//caculate average
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	//report results
	cout << total / Max << " = average score " << Max << " rounds\n";

	return 0;
}