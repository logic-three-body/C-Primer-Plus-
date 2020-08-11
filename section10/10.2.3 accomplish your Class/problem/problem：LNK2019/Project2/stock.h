#pragma once
#ifndef  STOCK00_H_
#define  STOCK00_H_
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
	//void set_tot() { total_val = shares * share_val; }   //下面的内联法和写在类声明里效果一样，只是如果不在声明时定义函数需要表明内联
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


