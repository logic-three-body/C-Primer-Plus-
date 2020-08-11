#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter an integer: " << endl;
	int by;
	cin >> by;
	cout << "couting..." << "\a\t" << by << endl;
	cout << "Enter the limit..." << endl;

	int N;
	cin >> N;
	cout << "Limit is " << N << endl;
	for (int i = 0; i < N; i = i + by)
		cout << i << endl;

	system("pause");
}