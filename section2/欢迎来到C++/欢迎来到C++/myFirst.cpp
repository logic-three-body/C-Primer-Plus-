#include <iostream>
#include <stdlib.h>
int main()
{
	using namespace std;
	using std::cout;
	using std::cin;
	using std::endl;
	int corrupt = 25;
	cout << "Hello sucker";
	cout << corrupt;
	cout << endl;
	cout << "You'll regret it!" << endl;
	cout << "I am " << corrupt - 1 << " sucker" << endl;
	int a = 1;
	cout << ""<< a;
	cin.get();
	cout << a + corrupt;
	//int a = 1;
	system("pause");
}