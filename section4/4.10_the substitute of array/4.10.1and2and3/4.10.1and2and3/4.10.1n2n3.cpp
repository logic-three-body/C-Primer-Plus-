#include<iostream>
#include<vector>
#include<array>
int main() {
	/**************vector****************/
	using namespace std;
	vector<int>vi;
	int n;
	cin >> n;
	vector<double>vd(n);	
	int i;
	cin >> i;
	cin >> vd[i];
	cout <<"vd[i]=\a\t"<< vd[i]<<endl;
	cout <<"vd[2]=\a\t"<<vd[2] <<endl;
      /**************array****************/
	array<int, 5>ai;
	array<double, 5>ad = { 1.2,2.1 };
	/*cout << array[1] << endl;*/


	  /**************array and vector****************/
	vector<double>a2(4) ;//initialize
	a2[0] = 1.2;
	a2[1] = 1.4;
	a2[2] = 1.7;
	a2[3] = 1.8;
	cout << "a2[2]: " << a2[2] << endl;

	array<int, 3 >a3= {1, 2, 3};
	array<int, 3 >a4;
	a4 = a3;   //valid for same sized array
	cout << "a3[2]: " << a3[2] << endl;
	cout << "a4[2]: " << a4[2] << endl;

	//misdeed 
	//a3[-2] = 22;
	//cout << "a3[-2]=\t" << a3[-2] << endl;
	//a3[200] = 1;
	//a3.at(200) = 77;
	//cout << "a3[200]=\t" << a3[200] << endl;

	system("pause");
}

