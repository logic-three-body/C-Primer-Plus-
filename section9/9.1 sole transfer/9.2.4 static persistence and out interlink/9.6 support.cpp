//support.cpp--useexternalvariable
//compilewithexternal.cpp
#include<iostream>
const double PI = 4.889880;
extern const int fingers = 11;
extern double warming;//use warming from anotherfile
//double warming;
//functionprototypea
void update(double dt);
void local();
extern "C" void spiff(int);
extern "C++" void spiff(double);
extern void spiff(double);
//extern "C" void spiff(const char*);
extern "C++" void spiff(const char*);

using std::cout;
using std::endl;
void update(double dt)//modifies global variable
{
extern double warming;
//optional redeclaration
warming += dt;//uses global warming
cout << "Updating global warming to" << warming;
cout << "degrees.\n";
cout << "\a And in update,PI is " << PI << endl;
cout << "\a And in update,fingers is " <<fingers << endl;
}


void local()
//uses local variable
{
double warming = 0.8;
//newvariablehidesexternalone
cout << "Local warming=" << warming << "degree,\n";
//Accessg lobal variable with the
//scope resolution operator
cout << "But global warming" << ::warming;
cout << "degrees\n";
cout << "\a And in local,PI is " << PI << endl;
}

void spiff(int)
{
	printf("Helloworld\n");
}

void spiff(double)
{
	printf("HelloDD\n");
}

void spiff(const char *a)
{
	int d = 1,b=2;
	printf(a,d,b);
}