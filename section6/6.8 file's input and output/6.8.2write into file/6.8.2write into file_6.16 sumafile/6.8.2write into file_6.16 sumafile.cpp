#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	//string *fileName = new string[100];
	char*fileName = new char[1000];
	cout << "Enter your file name" << endl;
	cin >> fileName/*[0]*/;
	ifstream inFile;//object for handling file input
	inFile.open(fileName/*[0]*/);//associate inFile with a file
	if (!inFile.is_open())//failed to open file
	{
		cout << "Could not open the file " << fileName << endl;
		cout << "Program terminating\n\a";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;//get first value
	while (inFile.good())//while input good and not at EOF
	{
		++count;//one more item read
		sum += value;//caculate running total
		inFile >> value;//get next value
	}
	if (inFile.eof())
	{
		cout << "End of file reached\n\a";
	}
	else if (inFile.fail())
		cout << "Input terminated by data mismatch\n\a";
	else
		cout << "Unknow reason\n\a";
	if (0 == count)
		cout << "No data processed\n";
	else
	{
		cout << "Item read : " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	delete[]fileName;
	inFile.close();//finish
	return 0;
}