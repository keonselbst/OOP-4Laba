#include <iostream>
#include <utility>
#include "Point.h"


double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

void Point::setX(double _x) 
{
	x = _x;
}

void Point::setY(double _y) 
{
	y = _y;
}

Point::Point() 
{
	x = 0;
	y = 0;
}

Point::Point(const Point& q) 
{
	x = q.x;
	y = q.y;
}

Point::Point(double _x, double _y) 
{
	x = _x;
	y = _y;
}

void Point::moveTo(double _x, double _y) 
{
	x = _x;
	y = _y;
}

double Point::distanceToZero() 
{
	return sqrt(static_cast<double>(x * x + y * y));
}

double Point::distanceTo(const Point& q) 
{
	return sqrt((x - q.x) * (x - q.x) + (y - q.y) * (y - q.y));
}

std::pair<double, double> Point::toPolar() 
{
	double r, an;
	an = atan2(y, x);
	r = sqrt(x * x + y * y);
	return std::make_pair(r, an);
}

bool Point::operator==(const Point& q)
{
	return x == q.x && y == q.y;
}

bool Point::operator!=(const Point& q) 
{
	return !(*this == q);
}

Point& Point::operator=(const Point& q) 
{
	if (*this != q) {
		x = q.x;
		y = q.y;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Point& q)
{
	os << q.x << " " << q.y;
	return os;
}