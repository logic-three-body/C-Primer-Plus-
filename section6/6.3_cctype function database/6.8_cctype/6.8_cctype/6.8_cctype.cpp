#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	cout << "Enter text for analysis,and type to terminate input.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int alpha = 0;
	int punct = 0;
	int others = 0;
	int prints = 0;

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch)) alpha++;
		else if (isspace(ch)) whitespace++;
		else if (isdigit(ch)) digits++;
		else if (ispunct(ch)) punct++;		
		else others++;
		if (isprint(ch)) prints++;
		cin.get(ch);
	}
	cout << alpha << " letters\n";
	cout << whitespace << " whitespace\n";
	cout << digits << " digits\n";
	cout << punct << " punct\n";
	cout << prints << " prints\n";
	cout << others << " others\n";

	return 0;
}