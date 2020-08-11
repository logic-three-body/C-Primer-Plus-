#include<iostream>
int sum_arr(const int *begin, const int *end);
using namespace std;
const int ArSize = 8;
int main()
{
	int cookie[ArSize] = { 1,2,4,8,16,32,64,128 };
	int sum = 0;
	//cout << "Array address = " << cookie << endl;
	//cout << "SIZE array = " << sizeof cookie << endl;
	cout << "*******************After into function*******************************\n\a";
	sum = sum_arr(cookie, cookie+3);// a lie
	cout << "First three eater ate " << sum << " cookies\n";
	sum = sum_arr(cookie + 4, cookie+8);// a lie
	cout << "Last four eaters ate " << sum << " cookies\n";
	return 0;


}

int sum_arr(const int *begin, const int *end)
{
	int total = 0;
	const int *pt;
	cout<<end-begin<<endl;//这是一个整数
	//cout << "arr" << " = " << arr << endl;
	//cout << "SIZE OF arr " << "= " << sizeof arr << endl;
	for (pt=begin;pt!=end;pt++)
		total += *pt;
	return total;

}