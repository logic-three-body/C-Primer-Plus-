#include <iostream>
using namespace std;
class Sample
{
private:
	int m_nX;
public:
	Sample(int a = 0) : m_nX(a) {};		
	//int num() { return m_nX; }
	friend int num(const  Sample &obj) { return obj.m_nX; }
};
int num(const  Sample &obj)
{
	
}

void fun(const Sample &p)
{
	cout <<num(p)  << endl;
}

int main()
{
	Sample s(10);
	fun(s);
	return 0;
	}

