//extenal.cpp--externalvariables
//compilewithsupport.cpp
#include<iostream>
using namespace std;
const double PI = 3.15133981;
extern const int fingers;
//externalvariable
double warming = 0.3;
//warmingdefined
//functionprototypes
void update(double dt);
void local();

extern void spiff(double);
extern "C" void spiff(int);
extern "C++" void spiff(double);
//extern "C" void spiff(const char*);
extern "C++" void spiff(const char*);
int main()
{
//uses global variable
	spiff(1);
	spiff(1.22);
	spiff("%d %d");
	cout << " Global warming is " << warming << " degrees\n";   
	cout << "\aNow const PI is " << PI << endl;
	cout << "\aNow extern const fingers is " <<fingers << endl;
	update(0.1);
//ca1l function to change warming
	cout << "Glcbal warming is " << warming <<
		"degrees.\n";
local();
//ca1lfunctionwithlocalwarming
cout << "Glcbal warming is " << warming<< "degrees.\n";
return 0;
}
