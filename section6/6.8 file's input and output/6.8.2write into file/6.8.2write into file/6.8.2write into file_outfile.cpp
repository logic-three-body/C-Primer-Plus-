#include<iostream>
#include<fstream>

int main()
{
	using namespace std;
	int Max;
	cout << "Enter the num\n";
	while (!(cin >> Max))
	{

		//cout <<Max << endl;
		cin.clear();//reset input
		while (cin.get() != '\n')
			continue;
		cout << "Please enter a num!" << endl;
	}
	cin.get();//eat the "\n"
	char *automoible = new char[Max];
	int year;
	double a_price,d_price;

	ofstream outFile;//create object for output
	char*fileName = new char[1000];
	cout << "Enter your file name" << endl;
	cin >> fileName;
	outFile.open(fileName);//associate with a file

	cout << "Enter the make and model of automobile: ";
	//cin.getline(automoible, 50);
	cin >> automoible;
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original year: ";
	cin >> a_price;
	d_price = 0.913*a_price;

	//display information on screen with cout

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automoible << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	//now do the same thing using outFile instead of cout

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automoible << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	delete []automoible;
	delete[]fileName;;
	outFile.close();
	return 0;

}