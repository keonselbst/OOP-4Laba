#include "Triangle.h"



Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	p1 = Point(x1, y1);
	p2 = Point(x2, y2);
	p3 = Point(x3, y3);
}

Triangle::Triangle(const Triangle& w) 
{
	p1 = w.p1;
	p2 = w.p2;
	p3 = w.p3;
}

void Triangle::setP1(double x1, double y1) 
{
	p1.setX(x1);
	p1.setY(y1);
}

void Triangle::setP2(double x2, double y2) 
{
	p2.setX(x2);
	p2.setY(y2);
}

void Triangle::setP3(double x3, double y3) 
{
	p3.setX(x3);
	p3.setY(y3);
}

void Triangle::setP1(const Point& _p1)
{
	p1 = _p1;
}

void Triangle::setP2(const Point& _p2) 
{
	p2 = _p2;
}

void Triangle::setP3(const Point& _p3)
{
	p3 = _p3;
}

Point& Triangle::getP1() 
{
	return p1;
}

Point& Triangle::getP2() {
	return p2;
}

Point& Triangle::getP3()
{
	return p3;
}

double Triangle::getSquare() 
{
	return abs((p2.getX() - p1.getX() * (p3.getY() - p1.getY())) - ((p3.getX() - p1.getX()) * (p2.getY() - p1.getY()))) / 2;
}

double Triangle::getPerimeter() 
{
	return p2.distanceTo(p3) + p1.distanceTo(p3) + p1.distanceTo(p2);
}

double Triangle::getHeightA() 
{
	double a = p2.distanceTo(p3);
	double b = p1.distanceTo(p3);
	double c = p1.distanceTo(p2);
	double p = (a + b + c) / 2;
	return (2 / a) * sqrt(p * (p - a) * (p - b) * (p - c));
}
double Triangle::getHeightB() {
	double a = p2.distanceTo(p3);
	double b = p1.distanceTo(p3);
	double c = p1.distanceTo(p2);
	double p = (a + b + c) / 2;
	return (2 / b) * sqrt(p * (p - a) * (p - b) * (p - c));
}
double Triangle::getHeightC() {
	double a = p2.distanceTo(p3);
	double b = p1.distanceTo(p3);
	double c = p1.distanceTo(p2);
	double p = (a + b + c) / 2;
	return (2 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
}
std::string Triangle::getTriangleType() {
	double a = p2.distanceTo(p3);
	double b = p1.distanceTo(p3);
	double c = p1.distanceTo(p2);
	double eps = 0.00001;
	if (abs(a * a + b * b - c * c) < eps || abs(a * a + c * c - b * b) < eps || abs(b * b + c * c - a * a) < eps)
		return "Треугольник прямоугольный.";
	else if (a * a + b * b > c * c || a * a + c * c > b * b || b * b + c * c > a * a)
		return "Треугольник остроугольный.";
	else
		return "Треугольник тупоугольный";
}
bool Triangle::operator==(const Triangle& w) {
	return p1 == w.p1 && p2 == w.p2 && p3 == w.p3;
}
bool Triangle::operator!=(const Triangle& w) {
	return !(*this == w);
}
std::ostream& operator<<(std::ostream& os, const Triangle& w) {
	os << "1 точка: " << w.p1 << '\n';
	os << "2 точка: " << w.p2 << '\n';
	os << "3 точка: " << w.p3 << '\n';
	return os;
}