#include<iostream>

int main()
{
	using namespace std;
	cout << "Do you want to be doomed?\n"<<"Y/N\n";
	char ch = cin.get();
	

	if ('y' == ch || 'Y' == ch)
		cout << "F**K YOU\a\a\a\n";
	else if ('n' == ch || 'N' == ch)
		cout << "A wise choice\n";
	else
		cout << "WHAT WRONG WITH YOU!!!\a\a\a\a\a\a\n";

	return 0;
}