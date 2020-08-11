#pragma once
#pragma once
#ifndef  STOCK02_H_
#define  STOCK02_H_
#endif // ! STOCK00_H_

#include<string>
#include<iostream>

using namespace std;

class Stock
{
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	//void set_tot() { total_val = shares * share_val; }   //�������������д����������Ч��һ����ֻ�������������ʱ���庯����Ҫ��������
	void set_tot();

public:
	/*void acquire(const string&co, long n, double pr);*/
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock &topval(const Stock&) const;
	Stock(const string &co, long n, double pr);
	~Stock();
	Stock();

};

