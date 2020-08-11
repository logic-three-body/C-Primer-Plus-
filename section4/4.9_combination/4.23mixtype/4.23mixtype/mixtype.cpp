#include<iostream>

struct antar
{
	int year;
	double money;
	std::string name;
};

int main()
{
	using namespace std;
	antar s01, s02, s03;
	s01.year = 1998;
	antar *pa=&s02;
	pa->year = 1999;
	antar trio[3];
	trio[0].year = 2003;
	trio[1].year = 2004;
	trio[2].year = 2005;
	//trio[3].year = 2006;
	//trio[4].year = 2007;
	cout << trio->year << endl;
	cout << (trio+2)->year << endl<<endl;

	const antar *arp[3] = {&s01,&s02 ,&s03 };

	cout << arp[1]->year << endl;
	/*cout << arp[1].year << endl;*/

	const antar **ppa = arp;
	auto ppb = arp;//or **ppb=arp;

	cout << (*ppa)->year << endl;
	cout << (*(ppa + 1))->year << endl;

	system("pause");
}