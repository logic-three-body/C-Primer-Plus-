#include<iostream>
#include<string>
int main()
{
	using namespace std;

	cout << "Enter...";

	string word;

	cin >> word;

	//modify
	char temp;
	int i, j;

	for (int j = 0,i = word.size()-1/*influence the beauty*/; j < i; --i, j++)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\n\aDone\n";

	//compo
	int a, b;
	a = 20, b = 2 * a;
	cout << b << endl;
	int cata;
	cata = 17, 240;
	cout << cata << endl;
	int cao;	
	cao = (17, 240);
	cout << cao << endl;

	system("pause");
}