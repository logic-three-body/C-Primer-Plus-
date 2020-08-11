#include<iostream>
unsigned int c_in_str(const char*str,const char ch);
using namespace std;
int main()
{
	char mmm[15] = "minimum";

	const char*wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m chars in " << mmm << endl;
	cout << us << " u chars in " << wail << endl;

	return 0;

	

}
unsigned int c_in_str(const char*str,const char ch)
{
	unsigned int count = 0;
	while (*str) //quit when *str is '\0'
	{
		if (ch == *str) count++;
		str++;
 	}
	return count;
}