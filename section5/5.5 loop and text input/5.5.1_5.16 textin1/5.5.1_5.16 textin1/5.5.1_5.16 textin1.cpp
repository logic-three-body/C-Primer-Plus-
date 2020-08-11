#include<iostream>

int main()
{
	using namespace std;

	char ch;
	int count = 0;

	cout << "Enter char and quit with \"#\"\n";
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		//cin >> ch;
		cin.get(ch);

	}

	cout << endl<<count<<" char read\n\a";

	return 0;

}
/*************************
char name[N];
char ch;
...
cin.get(name,N);
cin.get();
cin.get(ch);


**************************/