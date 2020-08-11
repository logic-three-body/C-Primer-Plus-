#include<iostream>
int main()
{
	using namespace std;

	int *pa = new int[10];
	for (int i = 0; i < 10; i++)
	{
        pa[i] = i;
		cout << pa[i] << endl;
		//int y;
	}
	//int x = *pa++;
	//cout << x << endl;
	delete[] pa;
	//cout << y;
	system("pause");
}