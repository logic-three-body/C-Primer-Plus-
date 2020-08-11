//stonewt.h -- definition for the Stonewt class
#ifndef STONEWT H_
#define STONEWT H
class Stonewt
{
private:
	enum {
		Lbs_per_stn = 14
	};//static const int Lbs_per_stn = 14 is okay too
		//pounds per stone
		int stone;
		//whole stones
		double pds_left;
		//fractional pounds
		double pounds;
		//entire weight in pounds
public:
	//explicit Stonewt(double lbs);
	Stonewt(double lbs);
	//constructor for double pounds
	Stonewt(int stn, double lbs); // constructor for stone, lbs
	Stonewt();
	//default constructor
	~Stonewt();
	void show_lbs() const;
	// show weight in pounds format
	void show_stn() const;
	//show weight in stone format
	};
#endif