#include<iostream>
#include<string>
const int N = 20;
int main()
{
	using namespace std;
	
	//char name[N];
	string name;

	cout << "Enter..." << endl;
	cin >> name;
	cout << "ASCILLIZED...\a\n";
	
	int i = 0;

	while (name[i])
	{
		cout << name[i] << ":\t" << int(name[i]) << endl;
		++i;
	}

	//system("pause");
	return 0;
}