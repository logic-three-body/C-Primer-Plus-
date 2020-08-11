//integer limits
#include<iostream>
#include<climits>
#define Zero 0
int main()
{
	using namespace std;
	int n_int = INT_MAX;
	int n_int2 = INT_FAST16_MAX;
	int n_int3 = INT_FAST32_MAX;
	int n_int4 = INT16_MIN;
	short n_short = SHRT_MAX;
	short n_short2= SHRT_MIN;
	long n_long = LONG_MAX;
	long n_long2 = LONG_MIN;
	long long n_llong = LLONG_MAX;
	long long n_llong2 = LLONG_MIN;
	unsigned long long nllong3 = ULLONG_MAX;	 
	int nchar = CHAR_BIT;
	long wren(33);
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	int ocTal = 042;
	int heX = 0x42;

	//sizeof operator yields size of type or of variable
	cout << "int is " << sizeof(int) << " bytes" << endl;
	cout << "nint is " << sizeof n_int << " bytes" << endl;
	cout << "nint2 is " << sizeof(n_int2) << " bytes" << endl;
	cout << "nint3 is " << sizeof(n_int3) << " bytes" << endl;
	cout << "nint4 is " << sizeof(n_int4) << " bytes" << endl;
	cout << "short is " << sizeof(short) << " bytes" << endl;
	cout << "long is " << sizeof(long) << " bytes" << endl;
	cout << "llong is " << sizeof(long long) << " bytes" << endl;
	cout << "llong is " << sizeof(long long) << " bytes" << endl;
	cout << "unsigned is " << sizeof(unsigned) << "bytes" << endl;
	cout << "unsigned short is " << sizeof(unsigned short) << "bytes" << endl;
	cout << "unsigned long is " << sizeof(unsigned long) << "bytes" << endl;
	cout << "unsigned int is " << sizeof(unsigned int) << "bytes" << endl;
	cout << "unsigned llong is " << sizeof(unsigned long long) << "bytes" << endl;

	cout << "Max or Min values" << endl;
	cout << "nint: " << n_int << endl;
	cout << "INT_FAST16_MAX: " << n_int2 << endl;
	cout << "INT_FAST32_MAX: " << n_int3 << endl;
	cout << "INT16_MIN: " << n_int4 << endl;
	cout << "SHRT_MAX: " << n_short << endl;
	cout << "SHRT_MIN: " << n_short2 << endl;
	cout << "LONG_MAX: " << n_long << endl;
	cout << "LONG_MIN: " << n_long2 << endl;
	cout << "LLONG_MIN: " << n_llong2 << endl;
	cout << "LLONG_MAX: " << n_llong << endl;
	cout << "ULLONG_MAX: " << nllong3 << endl;
	cout << "charBits: " << nchar << endl;
	cout << "wren(?)= " << wren<<endl;

	cout << "Now sam= " << sam << endl;
	cout << "Now sue= " << sue << endl;
	/*****************EXCEED*******************************/
	sam += 1;                           
	sue += 1;
	cout << "Now sam += 1= " << sam << endl;
	cout << "Now sue += 1= " << sue << endl;
	sam = sue = Zero;
	sam -= 1;
	sue -= 1;
	cout << "Now sam=Zero -= 1= " << sam << endl;
	cout << "Now sue=ZERO -= 1= " << sue << endl;
	sam = SHRT_MIN;
	sam -= 1;
	cout << "sam(SHRT_MIN)-1= is " << sam << endl;
	cout << "ocTal= " << ocTal << endl;

	
	cout << "hex= " << heX << endl;
	cout << "I have " << 99UL << " apples." << endl;
	cout << "I have " << 99LU << " apples." << endl;
	cout << "I have " << 99Ul << " apples.\n" << endl;	
	/***********    char    *******************/
	int a = 'a';
	int b = 1;
	cout << "I have " << a << " apples.\n" << endl;
	cout << "I have " << 'a' << " apples.\n" << endl;
	char ar = 'm';
	cout.put(ar);
	cout << endl;
	cout.put('sk');
	cout << endl;
	cout.put('s');
	cout << endl;
	cout.put(a);
	cout << endl;
	cout.put(b);
	cout << endl;
	cout.put(' ');
	cout << endl;
	cin >> ar;
	cout.put(ar);
	cout << endl;
	char alarm = '/a';
	cout << alarm << "DON\'T!!!\a\n"; //响铃
	cout << alarm<<endl;
	cout << "SOS\t" << "ASA\t"<<"ad\t"<<endl;
	cout << "GOF\v" << "etw\v" << "sdD\v" << endl;
	cout << "qweq  \b" <<"DA\b"<< endl;
	cout << "qweq\r" << "DA" << endl;
	cout << "hi\032 here" << endl;//Ctrl+Z的八进制
	cout << "hi\0xla there awawfa" <<"SS"<< endl;//Ctrl+Z的十六进制

	/*********************transforming*************************/
	cout << "\aOperation \n";
	cout << "Enter your code：_____________\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	int code;
	cin >> code;
	cout << "\aYou entered " << code << "---\n";
	cout << "\aCode verified!\n";
	int k\u00F6rper=3;//拓展字符（删除赋值再运行看警告）
	char g\u00E2teau=4;
	cout << k\u00F6rper << endl;
	cout << g\u00E2teau << endl;
	wchar_t bob = L'p';
	wcout << L"tall" << endl;
	wcout << bob << endl;
	char16_t ch1 = u'q';
	char32_t ch2 = U'\U0000222B';
	cout << "ch1=" << ch1 << endl;
	cout << "ch2=" << ch2 << endl;
	bool ans = true;
	bool start = -100;
	bool stop = 0;
	cout << "ans(bool)=" << ans << endl;
	cout << "start(bool)=" << start << endl;
	cout << "stop(bool)=" << stop << endl;
	const int toes = 10;
	const char am[] = "army";
	cout << "I have " << toes << " toes." << endl;
	cout << "I have an " << am << "?" << endl;
	system("pause");
}