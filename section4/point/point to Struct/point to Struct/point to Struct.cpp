#include<iostream>
struct inflat
{
	char nam[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflat *ps = new inflat;//allot memory for structure
	cout << "Enter name:\n";
	cin.get(ps->nam, 20);
	cout << "Enter volume:\n";
	cin >> (*ps).volume;
	cout << "Enter price:\n";
	cin >> ps->price;
	cout << "Name: " << (*ps).nam << endl;
	cout << "Price:" << ps->price << endl;
	cout << "Volume:" << ps->volume << endl;
	delete ps;
	system("pause");
}