#include<iostream>
int sum_arr(int arr[], int n);
using namespace std;
const int ArSize=8;
int main()
{
	int cookie[ArSize] = {1,2,4,8,16,32,64,128};
	int sum = 0;
	cout << "Array address = " << cookie << endl;
	cout << "SIZE array = " << sizeof cookie << endl;
	cout << "*******************After into function*******************************\n\a";
	sum = sum_arr(cookie, 3);// a lie
	cout << "First three eater ate " << sum << " cookies\n";
	sum = sum_arr(cookie+4, 4);// a lie
	cout << "Last four eaters ate " << sum << " cookies\n";
	return 0;

	
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	cout << "arr" << " = " << arr << endl;
	cout << "SIZE OF arr " << "= " << sizeof arr << endl;
	for (int i = 0; i < n; i++)
		total += arr[i];
	return total;

}