#pragma once 
#include "Object.h"
#include <iostream>
#include <sstream>

using namespace std;

class Triad : public Object
{
private:
	double first, second, third;
public:
	void setFirst(double value) { first = value; }
	void setSecond(double value) { second = value; }
	void setThird(double value) { third = value; }

	double getFirst() const { return first; }
	double getSecond() const { return second; }
	double getThird() const { return third; }

	Triad();
	Triad(const double f, const double s, const double t);
	Triad(const Triad& T);
};