//autoscp.cpp -- illustrating scope of automatic variables
#include <iostream>
void oil(int x);
static int texas = 1;
int main()
{
using namespace std;
cout << "Outside texas:" << &texas << endl;
register int a = 3;
int texas = 31;
int year = 2011;
cout << "In main(), texas = " << texas << ", &texas = ";
cout << &texas << endl;
cout << "In main(), year = " << year << ", &year = ";
cout << &year << endl;
oil(texas);
cout << "In main (), texas = " << texas << ", &texas = ";
cout << &texas << endl;
cout << "In main(), year = " << year << ", &year = ";
cout << &year << endl;
return 0;
}

void oil(int x)
{
using namespace std;
cout << "outside\a" << endl;
cout << texas << endl;
cout << &texas << endl;
int texas = 5;
cout << "In oil (), texas = " << texas << ", &texas = ";
cout << &texas << endl;
cout << "In oil (), x = " << x << ", &X = ";
cout << &x << endl;
{
//start a block
int texas = 113;
cout << "In block, texas = " << texas;
cout << ", &texas = " << &texas << endl;
cout << "In block, x = " << x << ", &x = ";
cout << &x << endl;
}
//end a block
cout << "Post-block texas = " << texas;
cout << ", &texas = " << &texas << endl;
}



