#include<iostream>

enum{red,orange,yellow,green,blue,violet,indigo};
int main()
{
	using namespace std;
	cout << "ENTER color(0-6)" << endl;
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red:cout << "red is "<<red<<endl; break;
		case orange:cout << "orange is " << orange << endl; break;
		case yellow:cout << "yellow is " << yellow << endl; break;
		case green:cout << "green is " << green << endl; break;
		case violet:cout << "violet is " << violet << endl; break;
		case indigo:cout << "indigo is " << indigo << endl; break;


		}
		cout<< "ENTER color(0-6)" << endl;
		cin >> code;
	}
	return 0;
}