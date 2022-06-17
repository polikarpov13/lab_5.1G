#pragma once 
#include "Triad.h" 

class Date : public Triad
{
public:
	Date();
	Date(double, double, double);
	Date(const Date&);

	friend ostream& operator << (ostream&, const  Date&);
	friend istream& operator >> (istream&, Date&);

	operator string() const;

	friend bool operator > (const Date& t1, const Date& t2);
	friend bool operator < (const Date& t1, const Date& t2);
};