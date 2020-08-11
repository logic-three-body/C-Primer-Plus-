#include<iostream>
#include"stock02.h"


//Stock::Stock(const string&co = "Erro", long n = 0, double pr = 0.0)
Stock::Stock(const string&co, long n, double pr)
{
	company = co;

	if (n < 0)
	{
		cerr << "Number of shares can't be negative;"
			<< company << " shares set to 0\n\a";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = n;
	set_tot();
}

//Stock::Stock()
//{
//
//}

Stock::~Stock()
{
	cout << "Bye " << company << endl;
}

Stock::Stock() :company("no name"), shares(0), share_val(0.0), total_val(0.0)
{

}

inline void Stock::set_tot()
{
	total_val = shares * share_val;
}

//void Stock::acquire(const string&co, long n, double pr)
//{
//	company = co;
//	if (n < 0)
//	{
//		cout << "Number of shares can't be negative"
//			<< company << " shares set to 0\n\a";
//		shares = 0;
//	}
//	else
//		shares = n;
//	share_val = pr;
//	set_tot();
//}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares can't be negative " << "Transaction is aborted\n\a";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();

	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares can't be negative " << "Transaction is aborted\n\a";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have!" << "Transaction is aborted\n\a";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

/*
void Stock::show()
{
	cout << " Company: " << company
		<< " Shares: " << shares
		<< " Share Price: $" << share_val
		<< " Total Worth: $" << total_val << endl;
}

*/

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()  const //optimize function show
{
	//set format to #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);
	cout << " Company: " << company
		<< " Shares: " << shares << endl;
	//set format to #.###
	cout.precision(2);
	cout << " Total Worth: $" << total_val << endl;

	//restore orginal format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);


}

inline const Stock & Stock::topval(const Stock &s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

