#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	string str1;
	string str2;
	/*cin >> str1;*/
	//cin >> str2;
	/*cin.get(str1);*/ //wrong
	//cout << str2 <<"\t\a"<< str1 << endl;
	//cout << str1 + str2 << endl;
	//cout << str2 + str1 << endl;
	char a[8 + 2] = "wwew";
	char s[10]= "abcd";
	strcpy_s(a,"ada");
	strcat_s(s, "abc");
	cout << s <<"\t\a"<<a<< endl;
	int len1 = str1.size();
	int len2 = strlen(a);
	cout << len1 <<"\t\a"<< len2 << endl;
	/*getline(cin, str1);*/
	cout << str1 << "\n";
    
	wchar_t title[] = L"a";
	char16_t nam2[] = u"a";
	char32_t nam3[] = U"a";
	cout << title << "\t\a" << nam2 << "\t\a" << nam3 << endl;
	cout<<R"(aaf \n \a qfrqwf afafs)"<<endl;//raw string
	cout << R"(aaf 
         \\n \a qfrqwf afafs)" << endl;//raw string
	cout << R"+*("afkjbfiob(afnas)""aff()")+*" << endl;
	system("pause");


}