#pragma once
#include <iostream>
class Point
{
	double x;
	double y;
public:
	friend std::ostream& operator<<(std::ostream& os, const Point& q);
	Point& operator=(const Point& q);
	bool operator==(const Point& q);
	bool operator!=(const Point& q);
	double getX();
	double getY();
	void setX(double _x);
	void setY(double _y);
	Point();
	Point(const Point& q);
	Point(double _x, double _y);
	~Point() {};
	void moveTo(double _x, double _y);
	double distanceToZero();
	double distanceTo(const Point& q);
	std::pair<double, double> toPolar();
};