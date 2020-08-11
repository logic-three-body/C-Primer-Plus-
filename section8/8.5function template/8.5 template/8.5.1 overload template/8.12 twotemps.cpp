// twotemps . cpp     using overloaded
#include <iostream>
template <typename T>
// original template
void Swap (T  &a, T &b);
template <typename T>
//new template
void Swap(T *a, T *b, int n);
void Show(int a[]);
	const int Lim = 8;
using namespace std;
int main()
{

int i = 10, j = 20;
cout << "i, j= " << i<<"," <<j<< endl;
cout << "Using compiler=generated int swapper: \n";
Swap(i, j);
	// matches original template
cout << "Now i, j= " << i << ", " << j << ". \n";
int di[Lim] = { 0, 7, 0, 4, 1, 7, 7, 6 };
int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
cout << "Original arrays: \n";
Show(di);
Show(d2);
Swap(di, d2, Lim);
// matches new template
cout << "Swapped arrays: \n";
Show(di);
Show(d2);
// cin.get () ;
return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
T temp;
temp = a;
a = b;
b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
T temp;
for (int i = 0; i < n; i++)
{
temp=a[i];
a[i] = b[i];
b[i] = temp;
}

}

void Show(int a[])
{
cout << a[0] << a[1] << "/";
cout << a[2] << a[3] << "/ ";
for (int i = 4; i < Lim; i++)
	cout << a[i];
cout << endl;
}


