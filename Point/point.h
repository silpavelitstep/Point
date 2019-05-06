#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
	int x;
	int y;
public:
	//constructors
	Point();
	Point(int x, int y);
	//metods
	void setX(int x);
	void setY(int y);
	void setXY(int x, int y);
	float lenght(Point &p);//расстояние между точками
	float square(Point &p);//площадь прямоугольника
	

	
};

#endif POINT_H