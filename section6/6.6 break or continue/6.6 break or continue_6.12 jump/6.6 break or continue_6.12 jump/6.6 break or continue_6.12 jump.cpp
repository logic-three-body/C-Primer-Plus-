#include<iostream>
const int SIZE = 60;
using namespace std;
int main()
{
	char *line=new char[SIZE];
	int space = 0;

	cout << "Enter a line\n";
	cin.get(line, SIZE);
	cout << "Complete it : " << line << endl;
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];//display char
		if ('.' == line[i])//quit if it is a period
			break;
		if (' ' != line[i])//skip rest loop
			continue;
		
		
		space++;
	}
	cout << endl << space << " spaces\n\a";
	cout << "Done\n";
	delete []line;
	return 0;
}