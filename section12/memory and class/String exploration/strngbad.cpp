#define _CRT_SECURE_NO_WARNINGS //put in first line
// strngbad. cpp -- StringBad class methods
#include <cstring>
// string.h for some
#include "sttngbad.h"
using std::cout;
// initializing static class member
int StringBad::num_strings = 0;
// class methods
// construct StringBad from C string
StringBad::StringBad(const char * s)
{
	len = std::strlen(s);
	// set size
	str = new char[len + 1];
	// allot storage

	/*   instruction:As strlen() couldn't include the '\0' in the return num
		So it's necessary to add one to the len as to allot proper storage*/

	std::strcpy(str, s);
	// initialize pointer
	num_strings++;
	// set object count
	cout << num_strings << ": \"" << str
		<< "\" object created\n";
	// For Your Information
}

StringBad::StringBad()
// default constructor
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	// default string
	num_strings++;
	cout << num_strings << "; \"" << str
		<< "\" default object created\n"; // FYI
}

StringBad ::~StringBad()
// necessary destructor
{
	cout << "\"" << str << "\" object deleted,";
	// FYI
	--num_strings;
	// required
	cout << num_strings << " left\n"; // FYI
	delete[] str;
	// required
}

StringBad & StringBad::operator=(const StringBad &st)//deep copy
{
	// TODO: 在此处插入 return 语句
	if (this == &st) //judge object assigned to itself
		return *this;//all done
	delete[]str;//free old string
	len = st.len;
	str = new char[len + 1];//get space for new string
	std::strcpy(str, st.str);//copy
	return *this;//return reference to invoking object
}

StringBad::StringBad(const StringBad &st)//deep copy
{
	++num_strings;//handle static num update
	len = st.len;//same length
	str = new char[len + 1];//allot space
	std::strcpy(str, st.str);//copy string to new location
	cout << num_strings << ":\"" << str << "\"object created\n";//For information

}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
}


