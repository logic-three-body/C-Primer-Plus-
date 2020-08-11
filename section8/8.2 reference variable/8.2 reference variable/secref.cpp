#include<iostream>
using namespace std;
int main()
{
	int rats = 101;
	int&rodents = rats;//rodents is a reference
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;
	++rodents;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "rats address = " << (&rats) << endl;
	cout << "rodents address = " << (&rodents) << endl;
	
	
	int bun = 50;
	rodents = bun;
	cout << "bun = " << bun << endl;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "rats address = " << (&rats) << endl;
	cout << "rodents address = " << (&rodents) << endl;
	cout << "bun address = " << (&bun) << endl;
	return 0;
}