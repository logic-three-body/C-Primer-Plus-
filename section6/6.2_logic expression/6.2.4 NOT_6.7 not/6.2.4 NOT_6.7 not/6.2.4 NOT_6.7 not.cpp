#include<iostream>
#include<climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;
	cout << "Enter a integer value: ";
	cin >> num;
	while (not is_int(num))
	{
		cout << "Out of range\a" << "	Try again!" << endl;
		cin >> num;
	}
	int val = int(num);	//type cast
	cout << "BINGO!\a" << endl;
	return 0;
}
bool is_int(double x)
{
	if (x <= INT_MAX and x >= INT_MIN) //use climits values
		return true;
	else
		return false;
}