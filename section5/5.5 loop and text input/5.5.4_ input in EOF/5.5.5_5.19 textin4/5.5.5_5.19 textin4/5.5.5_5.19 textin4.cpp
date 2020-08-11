#include<iostream>

int main()
{
	using namespace std;
	int ch;
	int count = 0;

	//while ((ch=cin.get())!=EOF)
	while (ch = cin.get() != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl<<count<<"chars read\n\a";

	return 0;
}