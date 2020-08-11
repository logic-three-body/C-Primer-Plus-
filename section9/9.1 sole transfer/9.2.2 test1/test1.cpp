#include<iostream>
using namespace std;
int main()
{
int teledeli = 5;
{
	cout << teledeli << endl;
//websight allocated
cout << "Hello\n" ;
int websight = -2;
int teledeli = 70;
//websight scope begins
cout << websight << ' '<< teledeli << endl;
teledeli += teledeli;
cout << teledeli << endl;
// websight expires

}
cout << teledeli << endl;
//cout << websight << ' ' << teledeli << endl;
} //teledeli expires
