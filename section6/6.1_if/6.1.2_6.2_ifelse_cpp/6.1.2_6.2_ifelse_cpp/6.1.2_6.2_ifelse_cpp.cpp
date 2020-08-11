#include<iostream>

int main()
{
	using namespace std;

	char ch;

	cout << "Type, and I shall repeat.\n";
	ch = cin.get();
	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch; //change ASCILL
			//cout << ch + 1;
		cin.get(ch);
	}
	cout << "\nPlease excuse the slight confusion.\n\a";

	return 0;
	
}