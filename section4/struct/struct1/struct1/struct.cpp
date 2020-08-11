#include<iostream>
#include<string>
struct companyS
{

	char nam[100];
	float volume;
	double price;
	std::string jj;
}peter3, peter4 = {"afa",1244,14124,"afw"};
struct companyX
{

	char nam[100];
	float volume=1000;
	double price;
	std::string jj;
	union id
	{
		long id1;
		std::string dw;
	}idx;
};
int main()
{
	using namespace std;
	struct company
	{
		char nam[100];
		float volume;
		double price;
		string jj;
	};
	company peter=
	{
        "fqefqf",
		1213,
		12424.22,
		"afas"			
	};
	companyS peter2[33] =
	{
		{"fqefqf",1213,12424.22,"afas"}
	    ,{"fqefqf",12e13,1242e42,"afas"}		
	};
 
	peter3 = peter4;
	cout << peter.nam << "\t" << peter.price << "\t\a" << peter.volume;
	cout <<"\t"<<peter.jj<< endl;
	cout << peter2[0].nam << "\t" << peter2[0].price+ peter2[1].price << "\t\a" << peter2[0].volume+ peter2[1].volume;
	cout << "\t" << peter2[0].jj+ peter2[1].jj << endl;
	cout << peter3.nam << "\t" << peter3.price << "\t\a" << peter3.volume;
	cout << "\t" << peter3.jj << endl;
	cout << peter4.nam << "\t" << peter4.price << "\t\a" << peter4.volume;
	cout << "\t" << peter4.jj << endl;

	system("pause");
}