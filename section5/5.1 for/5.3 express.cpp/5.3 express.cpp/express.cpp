#include<iostream>
int main()
{
	using namespace std;
	int x;

	cout << (x = 100) << endl;
	cout << (x < 3) << endl;
	cout << (x > 3) << endl;

	cout.setf(ios_base::boolalpha);
	cout << (x < 3) << endl;
	cout << (x > 3)<<endl;

	for (int i = 0; i < 2; i++);
	/*cout << i << endl;*/ //i no longer defined outside the for loops
	system("pause");
}