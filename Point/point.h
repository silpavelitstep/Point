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
	float lenght(Point &p);//���������� ����� �������
	float square(Point &p);//������� ��������������
	

	
};

#endif POINT_H