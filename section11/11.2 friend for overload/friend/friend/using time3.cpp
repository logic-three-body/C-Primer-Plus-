//usetime3.cpp-- using the fourth draft of the Time class
	// compile usetime3 . cpp and mytime3 . cpp together
#include <iostream>
#include "mytime.h"
int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;
	cout << "Aida and Tosca: \n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	// operator+ ()
	cout << "Aida + Tosca: " << temp << endl;
	//temp = aida * 1.17; // member operator* ()
	temp = aida.operator*(1.17);
	cout << "Aida * 1.17: " << temp << endl;
	cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
	cout<< "The meaning of 10.0 * Tosca : " << operator*(10,tosca)<< endl;
	operator<<(cout, "temp=");
	operator<<(cout, temp)<<"\n\a";
	temp << cout;
	temp.operator<<(cout)<<" HI\n";
	temp.operator<<(cout << "temp is ");
	cout << endl;
	aida.operator<<(cout << "aida is ");
	cout << endl;
	
	return 0;
}