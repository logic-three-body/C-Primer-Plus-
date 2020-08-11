#include<iostream>

const char*favAni[4] =
{
	"Rabbit\n\a",
	"Tiger\n\a",
	"Elephant\n\a",
	"Giraffe\n\a"
};

int main()
{
	using namespace std;
	int type;
	cout << "Enter your number\n";
	cin >> type;
	int index;
	if (type > 17 && type < 35)
		index = 0;
	else if (type >= 35 && type <= 50)
		index = 1;
	else if (type > 50 && type < 60)
		index = 2;
	else
		index = 3;
	cout << "Your type was to " << favAni[index];
	return 0;
}