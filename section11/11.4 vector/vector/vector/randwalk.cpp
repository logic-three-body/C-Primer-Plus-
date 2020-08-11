﻿// randwalk.cpp -- using the Vector class
// compile with the vect.cpp
#include<iostream>
#include <cstdlib>//rand() srand() prototypes
#include <ctime>//time() prototypes
# include "vector.h"
#include<fstream>
int main()
{
using namespace std;
using VECTOR::Vector;
ofstream fout;
//int *p = (int*)10;
fout.open("random_walk.txt");
srand(time(0));// seed random-number generator
	double direction;
Vector step;
Vector result(0.0,0.0);
unsigned long steps = 0;
double target;
double dstep;
cout << "Enter target distance (q to quit):";
while (cin >> target)
{
cout<<"Enter step length: ";
if (!(cin>> dstep))
break;

while (result.magval() < target)//矢量的叠加,把每一步的矢量积累到一起
{
	direction= rand()% 360;
	step.reset(dstep, direction,Vector:: POL);
	result = result + step;		
	steps++;
}

cout <<"After "<<steps<<"steps, the subject "
"has the following location: \n";
cout<< result<< endl;
result.polar_mode();
cout<<" or \n" <<result<< endl;
cout<< "Average outward distance per step="
<< result.magval()/steps<< endl;
steps= 0;
fout << result << endl;
result.reset(0.0, 0.0);
cout << "Enter target distance(q to quit) : ";
}

cout<< "Bye\n";
cin.clear();
while (cin.get()!='\n')
	continue;
return 0;


}