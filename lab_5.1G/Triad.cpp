#include "Triad.h" 

Triad::Triad() : first(0), second(0), third(0)
{ }

Triad::Triad(double first, double second, double third) {
	this->first = first;
	this->second = second;
	this->third = third;
}

Triad::Triad(const Triad& T) : first(T.first), second(T.second), third(T.third)
{ }
