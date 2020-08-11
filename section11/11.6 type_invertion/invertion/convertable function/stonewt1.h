#pragma once
// stonewtl.h -- revised definition for the Stonewt class
#ifndef STONEWTI H
#define STONEWTI H
class Stonewt
{
private:
	enum {
		Lbs_per_stn = 14
	};
	// pounds per stone
	int stone;
	// whole stones
	double pds_left;
	// fractional pounds
	double pounds;
	// entire weight in pounds
public:
	Stonewt(double lbs);
		//-construct from double pounds
		Stonewt(int stn, double lbs); // construct from stone, 1bs
		Stonewt();
		// default constructor
		 ~Stonewt();
	void show_lbs() const;
	// show weight in pounds format
	void show_stn() const;
	// show weight in stone format
		// conversion-functions
	explicit operator int() const;
	explicit operator double()  const;
	int Stone_to_Int() const;
	//Stonewt operator+(const Stonewt&st) const;
	friend Stonewt operator+(const Stonewt&,const Stonewt&);
	
};

#endif