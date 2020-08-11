#include<iostream>
#include<string>

int main()
{
	using namespace std;

	string word = "?**k";

	for (char ch = 'a'; word != "f**k"; ch++)
	{
		cin >> word[0];
		cout << word << endl;
	}

	cout << "word is\t\a" << word << endl;

	system("pause");
	
}