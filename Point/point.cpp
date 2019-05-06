#include "point.h"
#include "cmath"

void Point::setX(int x)
{
	this->x = x;
}
void Point::setY(int y)
{
	this->y = y;
}
void Point::setXY(int x, int y)
{
	this->x = x;
	this->y = y;
}
//lenght between this-point and argument-point
float Point::lenght(Point &p)
{
	return (float)sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
}
float Point::square(Point &p)
{
	return abs((p.x - x)*(p.y - y));
}
Point::Point()
{
	x = y = 0;
}
Point::Point(int x, int y) :x(x), y(y) {}