//twofilel.cpp-variableswihexternalandinternallinkage
#include<iostream>
//tobecompiledwithtwofile2.cpp
int tom = 3;
//external variable definition
int dick = 30;
//external variable definition
static int harry = 300;//statie.internallinkage
//functionprototype
void remoteaccess();
int main()
{
using namespace std;
cout << "main() reports the following addreses\n";
cout << &tom << "=&tom," << &dick << "=&dick,";
cout << &harry <<"=&harry\n";
remoteaccess();
return 0;
}
