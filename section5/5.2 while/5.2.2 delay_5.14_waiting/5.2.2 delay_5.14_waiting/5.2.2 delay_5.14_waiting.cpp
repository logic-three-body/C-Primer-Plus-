#include<iostream>
#include<ctime>
const long N = 1000000;
int main()
{
	using namespace std;
	cout << "Enter delay time" << endl;

	//long wait = 0;
	//while (wait < N) wait++;   

	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;//convert to clock ticks
	cout << "starting\n\a";
	clock_t start = clock();
	while (clock() - start < delay);//wait until time-elapses
	

	cout << "Done!" << endl;
	return 0;
}