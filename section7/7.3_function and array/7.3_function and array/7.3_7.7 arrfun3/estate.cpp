#include<iostream>
const int Max = 5;
using namespace std;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);//"const" can avoid you changing data
void revalue(double r,double ar[],int n);
int main()
{
	double properites[Max] = { 0 };

	int size=fill_array(properites,Max);
	show_array(properites, size);
	if (size > 0)
	{
		cout << "Enter the revalue factor:\n";
		double factor;
		while (!(cin>>factor))//in case bad input
		{
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "F**k you! \n Enter a num\n";
		}
		revalue(factor, properites, size);
		show_array(properites, size);

	}

	cout << "Done\n";
	cin.get();
	cin.get();
	return 0;
}
int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter your value#" << (i + 1) << "£º ";
		while (!(cin >> temp))//in case bad input
		{
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "F**k you! \n Enter a num\n";
		}
		if (temp < 0) break;
		ar[i] = temp;
	}
	return i;
}
void show_array(const double ar[], int n)//"const" can avoid you changing data
{
	for (int i = 0; i < n; i++)
	{
		cout << "Property#" << (i + 1) << ":$" << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++) ar[i] *= r;
}