#include "Date.h"

Date::Date() : Triad()
{ }

Date::Date(double f, double s, double t) : Triad(f, s, t) {

}

Date::Date(const Date& d) : Triad(d)
{ }

ostream& operator << (ostream& out, const Date& d) {
	out << string(d);
	return out;
}

istream& operator >> (istream& in, Date& d) {
	double first, second, third;

	cout << " First = "; in >> first;
	cout << " Second = "; in >> second;
	cout << " Third = "; in >> third;

	d.setFirst(first);
	d.setSecond(second);
	d.setThird(third);

	return in;
}

Date::operator string() const {
	stringstream ss;

	ss << " First: " << this->getFirst() << endl;
	ss << " Second: " << this->getSecond() << endl;
	ss << " Third: " << this->getThird() << endl;

	return ss.str();
}

bool operator > (const Date& t1, const Date& t2) {
	return (t1.getFirst() > t2.getFirst() || (t1.getFirst() == t2.getFirst()) &&
		(t1.getSecond() > t2.getSecond()) || (t1.getFirst() == t2.getFirst()) && (t1.getSecond() == t2.getSecond()) &&
		(t1.getThird() > t2.getThird()));
}

bool operator < (const Date& t1, const Date& t2) {
	return (t1.getFirst() < t2.getFirst() || (t1.getFirst() == t2.getFirst()) &&
		(t1.getSecond() < t2.getSecond()) || (t1.getFirst() == t2.getFirst()) && (t1.getSecond() == t2.getSecond()) &&
		(t1.getThird() < t2.getThird()));
}