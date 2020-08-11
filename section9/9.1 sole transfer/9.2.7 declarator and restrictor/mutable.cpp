#define _CRT_SECURE_NO_WARNINGS //put in first line
#include<iostream>

using namespace std;
struct Data
{
	char name[30];
	mutable int a;
};

int main()
{
	const Data veep = { "a",0 };
	//strcpy(veep.name, "d");
	veep.a++;
}
//class Data
//{
//public:
//	Data();
//
//	~Data();
//	char getName(const char* a);
//	int add(int a);
//
//private:
//	char name[30];
//	mutable int access;
//};
//
//Data::Data()
//{
//}
//
//Data::~Data()
//{
//}
//
//char Data::getName(const char* a)
//{
//	strcpy(name, a);
//	return name;
//}
//
//int Data::add(int a)
//{
//	access = a;
//	return ++access;
//}
//
//int main()
//{
//	const Data veep;
//	veep.getName("Joy");
//	veep.add();
//	
//	
//}