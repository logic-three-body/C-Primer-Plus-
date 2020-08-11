#include<iostream>
#include<cmath>
const double Rad_to_deg = 57.29577951;
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
void rect_to_polar(const rect*pxy, polar *pda);
void show_polar(const polar *pda);
int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)//sick use of cin
	{
		rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
		cout << "Next two nums(q to quit): ";
	}
	cout << "Done\n";
	return 0;
}

void rect_to_polar(const rect*pxy,polar *pda)
{
	pda->distance = sqrt(pxy->x*pxy->x + pxy->y*pxy->y);

	pda->angle = atan2(pxy->y, pxy->x);
}
void show_polar(const polar *pda)
{
	

	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle*Rad_to_deg;
	cout << " dagrees\n";
}





