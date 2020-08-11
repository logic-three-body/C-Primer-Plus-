#include<iostream>
int main() {
using namespace std;
double ear[4]{ 1.2e4,1.6e4,1.1e4,1.8e40 };
for (int i = 0; i < 4; i++) cout << ear[i] << endl;
long pli[2]  { 25,3.0 };
for (int i = 0; i < 2; i++) cout << pli[i] << endl;
char tli[7]{ 'h',8,8,1200982198,7 ,0};
for (int i = 0; i < 2; i++) cout << tli[i] << endl;
char xli[3]{ 1,65,97 };
for (int i = 0; i < 4; i++) cout << xli[i] << endl;
cout << pli << endl;
cout << "I am " "a pig"
" or som""ething" << endl;
const int N = 50;
char nam[N],des[N];
cout << "Enter twice" << endl;
//cin.getline(nam, N);
cin.getline(des, N);
//cin.getline(nam, N).getline(des, N);
cin.get(nam, N);
cin.get();
//cin.get(des, N);
//cin >> nam;
//cin >> des;
//cin.getline(nam, N);
//cin.get(des, N);
//cin.get(nam, N);
//cin.getline(des, N);
//cin >> nam;
//cin.getline(des, N);
//
cout << des<<"\t" << nam<<"\n\a"<<endl;
//int y ;
//char ch;
//(cin >> y).get(ch);
//cin.getline(des, N-3);
//cout << y << " " << des << endl;


system("pause");
}
