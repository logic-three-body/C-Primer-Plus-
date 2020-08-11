#include<iostream>
//a stone is equal to 14 pounds
int stoneConvertion(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter your weight(stone)" << endl;
	cin >> stone;
	int pounds = stoneConvertion(stone);
	cout << stone << " stone = "<<pounds<<" pounds."<<endl;
	system("pause");
}
int stoneConvertion(int sts)
{
	return 14 * sts;
}