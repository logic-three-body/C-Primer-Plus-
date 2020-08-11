#include<iostream>
#include<string>
const int Cities = 5;
const int Years = 5;

int main()
{
	using namespace  std;

	const string cities[Cities]=
	//const char*cities[Cities] = //array of pointers
	{
		"New York",				//to 5 strings
		"Gotham City",
		"Chiago ",
		"LaLa Land",
		"San Frosico"
	};

	int max[Years][Cities]=		//2D array
	{
		{96,111,87,101,105},
		{11,122,113,12,122},
		{12,133,1212,122,122},
		{123,243,1332,1323,112},
		{121,1212,1212,111,'A'}
	};

	cout << "Max salary for these cities:\a\t\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";

		for (int year = 0; year < Years; ++year)
			cout << max[year][city] << "\t";
		cout << endl;
	}

	return 0;
}