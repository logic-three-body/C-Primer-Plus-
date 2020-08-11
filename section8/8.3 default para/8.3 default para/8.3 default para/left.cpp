// left. cpp -- string function with a default argument
#include <iostream>
const int ArSize = 80;
char*left(const char*str, int n = 1);
char*left_max(const char*str, int n);
int main()
{
	using namespace std;
	char sample[ArSize];
	cout << "Enter a string: \n";
	cin.get(sample, ArSize);
	char *ps = left(sample, 40000);
	cout << ps << endl;
	delete[] ps;
	// tree old string
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
	// free new string
	char*pt;
	pt = left_max(sample,40000);
	cout << pt << endl;
	delete[] pt;
	return 0;
}

// This function returns a pointer to a new string
// consisting of the first n characters in the str string.
char*left(const char*str, int n)
{
if (n < 0)
	n = 0;
char * p = new char[n + 1];
int i;
for (i = 0; i < n && str[i]; i++)
	p[i] = str[i]; // copy characters
while (i <= n)
p[i++] = '\0'; // set rest of string to '10'
	return p;
}

char*left_max(const char*str, int n)
{
	if (n < 0)
		n = 0;

	int m = 0;
	while (m <= n && str[m])
		m++;
	char * p = new char[m + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i]; // copy characters
	while (i < (m+1))
	/*while (i <= n)*/
		p[i++] = '\0'; // set rest of string to '10'
	return p;
}
