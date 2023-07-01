#pragma once
#include <iostream>
#include "Point.h"
#include <string>
class Triangle
{
	Point p1, p2, p3;
public:
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	Triangle(const Triangle& w);
	~Triangle() {};
	void setP1(double x1, double y1);
	void setP1(const Point& _p1);
	void setP2(double x2, double y2);
	void setP2(const Point& _p2);
	void setP3(double x3, double y3);
	void setP3(const Point& _p3);
	Point& getP1();
	Point& getP2();
	Point& getP3();
	double getSquare();
	double getPerimeter();
	double getHeightA();
	double getHeightB();
	double getHeightC();
	bool operator==(const Triangle& w);
	bool operator!=(const Triangle& w);
	friend std::ostream& operator<<(std::ostream& os, const Triangle& w);
	std::string getTriangleType();
};