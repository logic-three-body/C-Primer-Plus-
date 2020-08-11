#include<iostream>
struct travel_time
{
	int hour;
	int mins;
};
const int Mins_per_hr = 60;

using namespace std;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
	travel_time day1 = { 5,45 };//5h,45min
	travel_time day2 = { 4,55 };//4h,55min

	travel_time trip = sum(day1, day2);
	cout << "Two day total: ";
	show_time(trip);

	travel_time day3 = { 4,32 };
	cout << "Three day total: ";
	show_time(sum(trip, day3));
	return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;

	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hour = t1.hour + t2.hour + (t1.mins + t2.mins) / Mins_per_hr;
	return total;
}
void show_time(travel_time t)
{
	cout << t.hour << " hours, " << t.mins << " minutes\n\a";
}