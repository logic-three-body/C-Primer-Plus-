#include<iostream>
int main()
{
	using namespace std;
	int a;
	cout << &a << endl;
	char b = 'B';
	char*x;
	x = &b;
	int*h;
	h=&a;
	cout << x << endl;
	cout << h << endl;
	*x = 12;
	cout << b << endl;
	
	//long *test=&a;
	//*test = 200;
	//cout << &test << endl;

	int*pt2;
	/*pt = 0xB23121;*/ //wrong
	pt2 = (int*)0xB23121;
	cout << pt2 << endl;

	int night = 1001;
	int*pt = new int;
	/**pt = night;*/ //OKAY
	/**pt = double(1234);*/
	*pt = 981;
	cout << "night value= " << night << " location:\a " << &night << endl;
	cout << "int value=" << *pt << " location" << pt << endl;
	cout << "sizeof(pt)=" << sizeof(pt) << endl;
	double *pd = new double;
	cout << "sizeof(pd)=" << sizeof(pd) << endl;
	/**pd = 10.0;*/
	cout << "sizeof(pd)=" << sizeof(*pd) << endl;
	delete pt;
	/*delete pt;*/
	/*double *pt = new double;*/
	/*cout << "After deleting... *pt" << *pt << endl;*/

	int*pt3 = new int[19];
	pt3[0]=7;
	cout << pt3[0] << endl;
	delete [] pt3;
	int *pt4 = new int[20];
	for (int i = 0; i < 20; i++)
	pt4[i] = i;
	/*pt4 = &pt4[0];*/
	cout << *pt4 << endl;
	pt4 += 4;
	//pt4 = &pt4[0];
	cout << *pt4 << endl;
	pt4 -= 4;  //an important step
	//pt4 = &pt4[0];
	delete[] pt4;
	//pt4 =  &pt4[7];
	//cout << *pt4 << endl;
	//delete  pt4;
	/*cout << pt3[1] << endl;*/
	system("pause");
	
}
