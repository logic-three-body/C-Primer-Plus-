#include<iostream>
#include<cmath>

using namespace std;
struct rect
{
	double x; //horizontal distance from origin
	double y; //vertical distance from origin
};

struct polar
{
	double distance;//distance from orgin
	double angle;//direction from orgin	
};

//function prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)//sick use of cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two nums(q to quit): ";
	}
	cout << "Done\n";
	return 0;
}

polar rect_to_polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;//return a polar struct
}
void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle*Rad_to_deg;
	cout << " dagrees\n";
}





