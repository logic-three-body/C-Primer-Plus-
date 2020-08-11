#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Enter..." << endl;
	string word;
	cin >> word;

	//display
	for (int i = word.size() - 1; i >= 0; i--)//get the num of string
		cout << word[i];
	
	cout << endl<< "f**k you...\a\n";


	//experiment,don't do it in a normal code
	int x;
	cin >> x;
	cout << 2 * x++*(3 - ++x) << endl;
	cout << x << endl;

	system("pause");
}