//-strngbad.h -- flawed -string class definition
#include <iostream>
#ifndef STRNGBAD H
#define STRNGBAD
class StringBad
{
private:
	char * str;
	// pointer to string
		 int len;
	//: length - of string
		static int num_strings;//all the object would share just one this static member
	//.number of objects.
public:
		StringBad(const char *s); // constructor
	StringBad();
	// default constructor
	 ~StringBad();
	// destructor.
	 StringBad&operator=(const StringBad &);//copy function
	 StringBad(const StringBad&);//copy function
		// friend function
		friend std::ostream & operator<<(std ::ostream & os,
			const  StringBad & st);
};
#endif
