// stonel . cpp -- user-defined conversion functions
//compile with stonewtl.cpp
#include <iostream>
#include "stonewt1.h"
int main()
{
using std:: cout ;
Stonewt poppins(9, 2.8) ;// 9 stone, .2.8 pounds_ _
//double p_wt = poppins ; // implicit conversion .
double p_wt = (double)poppins;
p_wt = poppins.Stone_to_Int();
//long gone = poppins;
long gone2=double(poppins);
long gone3 = int(poppins);
long gone4 = poppins.operator int();
cout << "Convert to double =>c";
cout << "Poppins: " << p_wt << " pounds. \n" ;
cout << "Convert to int => "; 
cout << "Poppins: " << int (poppins) << " pounds. \n";
Stonewt jennySt(9, 12);
Stonewt bennySt(12, 8);
Stonewt total;
total = jennySt + bennySt;

double kennySt = 176.0;
total = jennySt + kennySt;
//cout << poppins << std::endl;
double pennyD = 146.0;
total = pennyD+jennySt;
total = kennySt + pennyD;
return 0;
}

