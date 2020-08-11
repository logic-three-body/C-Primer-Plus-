#include<iostream>

int main()
{
	using namespace std;

	char ch;
	int count = 0;
	cin.get(ch);
	//while (cin.fail()==false)  //test for EOF
	while(!cin.fail())
	//while(cin)
	/*while(cin.get(ch))*/
	{
		cout << ch;
		++count;
		//cin.get(ch);

	}
	cout << endl << count << " chars read\n\a";
	//int x = (1, 24);
	//cout << x << endl;

	return 0;

}