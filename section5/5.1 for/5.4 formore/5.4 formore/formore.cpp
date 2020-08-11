#include<iostream>
const int SIZE = 16;
int main()
{
	using namespace std;
	long long fac[SIZE];
	fac[1] = fac[0] = 1LL;
	for (int i = 2; i < SIZE; i++)
	{
		fac[i] = i * fac[i - 1];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << i << "!= " << fac[i] << endl;
	}
	system("pause");
}