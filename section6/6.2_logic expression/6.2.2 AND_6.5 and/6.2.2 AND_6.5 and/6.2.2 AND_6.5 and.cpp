#include<iostream>

using namespace std;
const int N = 6;
int main()
{
	float num[N];

	cout << "Enter the number...\n";

	int i = 0;
	float temp;

	cin >> temp;
	while (i < N&&temp >= 0)
	{
		num[i] = temp;
		++i;
		if (i < N)
		{
			cout << "Next:	\a\n";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "No data,f**k it.\n\a";
	else
	{
		cout << "Enter your num: " << endl;
		float you;
		cin >> you;
		int count = 0;
		for (int j=0; j < i; j++)
			if (num[j] > you)
				++count;
		cout << count;
		cout << " of people bigger than you.\n\a";
	}
	return 0;
}