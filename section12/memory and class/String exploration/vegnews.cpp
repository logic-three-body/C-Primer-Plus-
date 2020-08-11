// vegnews . cpp - - using new and delete with classes
// compile with strngbad.cpp
#include <iostream>
using std::cout;
#include "sttngbad.h"
void callmel(StringBad &); // pass by reference
void callme2(StringBad);
// pass by value
int main()
{
	using std::endl;
	{
	cout << "Starting an inner block. \n";
	StringBad headlinel("Celery Stalks at Midnight");
	StringBad headline2("Lettuce Prey");
	StringBad sports("Spinach Leaves Bowl for Dollars");
	cout << "headlinel: " << headlinel << endl;
	cout << "headline2: " << headline2 << endl;
	cout << "sports: " << sports << endl;
	callmel(headlinel);
	cout << "headlinel: " << headlinel << endl;
	callme2(headline2);
	cout << "headline2: " << headline2 << endl;
	cout << "Initialize one object to another: \n";
	StringBad sailor = sports;
	cout << "sailor: " << sailor << endl;
	cout << "Assign one object to another: \n";
	StringBad knot;
	knot = headlinel;
	cout << "knot: " << knot << endl;
	knot = knot;
	cout << "knot: " << knot << endl;
	cout << "Exiting the block. \n";
	}

	cout << "End of main () \n";
	return 0;
}

void callmel(StringBad & rsb)
{
cout << "String passed by reference: \n";
cout << " \"" << rsb << "\"\n";
}

void callme2(StringBad sb)
{
cout << "String passed by value: \n";
cout << "  \"" << sb << "\"\n";
}

