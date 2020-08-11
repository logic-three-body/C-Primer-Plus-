#pragma once
//mytime2.h -- Time class after operator overloading...
#ifndef MYTIME2 H
#define MYTIME2 H
class Time
{
private:
int hours;
int minutes;
public:
Time () ;
Time (int h, int m = 0) ;
void AddMin(int m) ;
void AddHr(int h) ;
void Reset (int h = 0, int m = 0) ;
Time operator+ (const Time & t) const ;
Time operator- (const Time & t) const;
Time operator* (double n) const;
void Show () const ;
};

#endif
