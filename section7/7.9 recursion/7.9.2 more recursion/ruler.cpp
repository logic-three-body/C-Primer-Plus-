#include<iostream>
const int Len = 66;
const int Divs = 6;
void subDivide(char ar[],int low,int high,int level);
using namespace std;
int main()
{
	char *ruler = new char[Len];
	int i;
	for (i = 1; i < Len - 2; i++)
		ruler[i] = ' ';
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max]='|';
	cout << ruler << endl;
	for (i = 1; i <= Divs; i++)
	{
		subDivide(ruler, min, max, i);
		cout << ruler << endl;
		for (int j = 1; j < Len - 2; j++)
			ruler[j] = ' ';//reset to blank ruler
	}


	delete[]ruler;
	return 0;

}
void subDivide(char ar[], int low, int high, int level)
{
	if (level == 0) return;
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subDivide(ar, low, mid, level - 1);
	subDivide(ar, mid, high, level - 1);
}