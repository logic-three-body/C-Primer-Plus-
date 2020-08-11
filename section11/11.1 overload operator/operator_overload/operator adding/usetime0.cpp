// usetime0. cpp -- using the first draft of the Time class
// compile usetime0 . cpp and mytime0. cpp together
#include <iostream>
#include "mytime0.h"
int main()
{
using std:: cout ;
using std:: endl ;
Time planning;
Time coding (2, 40) ;
Time fixing (5, 55) ;
Time total;
cout << "planning time ";
planning . Show ( ) ;
cout << endl;
cout << "coding time =";
coding . Show ( ) ;
cout << endl ;
cout << "fixing time = ";
fixing . Show ( ) ;
cout << endl;
total = coding.Sum (fixing) ;
cout << "coding. Sum (fixing) = ";
total . Show ( ) ;
cout << endl<<endl ;
//cout
Time planning2;
Time coding2(2, 40);
Time fixing2(5, 55);
Time total2;
cout << "planning time ";
planning2.Show();
cout << endl;
cout << "coding time =";
coding2.Show();
cout << endl;
cout << "fixing time = ";
fixing2.Show();
cout << endl;
//total2 = coding2.Sum(fixing);
//total2 = coding2 + fixing2;
total2 = coding2.operator+(fixing);//this version can make you understand operatior overload better
cout << "coding. Sum (fixing) = ";
total2.Show();
cout << endl;
return 0;
}

