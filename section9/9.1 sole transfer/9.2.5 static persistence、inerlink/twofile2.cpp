#include<iostream>
extern int tom;
//tomdefinedelsewhere
static int dick = 10;//overridesexternaldick
int harry = 200;
//externalvariabledefinition,
//noconflictwithtwofilelharry
void remoteaccess()
{
using namespace std;
cout << "remoteaccess() repors the following addresses\n";
cout << &tom << "=&tom"
<< &dick << "=&dick,";
cout << &harry << "=&harry\n";
}
