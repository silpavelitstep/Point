#include "test_point.h"
#include "point.h"
#include <iostream>
using namespace std;
void test(bool testResault)
{
	cout << (testResault ? "Pass" : "Err") << endl;
}
bool test_square()
{
	//если не пройдена часть теста, тест не пройден целиком
	bool resault=true;
	Point p1, p2;
	
	//две точки, 4 переменных, каждая - или +
	//пишем практически одно и то же
	p1.setXY(2, 3);
	p2.setXY(4, 5);
	resault &= (4 == p1.square(p2));

	p1.setXY(2, 3);
	p2.setXY(4, -5);

	resault &= (16 == p1.square(p2));

	p1.setXY(2, 3);
	p2.setXY(-4, 5);
	resault &= (12 == p1.square(p2));

	p1.setXY(2, 3);
	p2.setXY(-4, -5);
	resault &= (48 == p1.square(p2));

	p1.setXY(2, -3);
	p2.setXY(4, 5);
	resault &= (16 == p1.square(p2));

	p1.setXY(2, -3);
	p2.setXY(4, -5);
	resault &= (4 == p1.square(p2));

	p1.setXY(2, -3);
	p2.setXY(-4, 5);
	resault &= (48 == p1.square(p2));

	p1.setXY(2, -3);
	p2.setXY(-4, -5);
	resault &= (12 == p1.square(p2));

	p1.setXY(-2, 3);
	p2.setXY(4, 5);
	resault &= (12 == p1.square(p2));

	p1.setXY(-2, 3);
	p2.setXY(4, -5);
	resault &= (48 == p1.square(p2));

	p1.setXY(-2, 3);
	p2.setXY(-4, 5);
	resault &= (4 == p1.square(p2));

	p1.setXY(-2, 3);
	p2.setXY(-4, -5);
	resault &= (16 == p1.square(p2));

	p1.setXY(-2, -3);
	p2.setXY(4, 5);
	resault &= (48 == p1.square(p2));

	p1.setXY(-2, -3);
	p2.setXY(4, -5);
	resault &= (12 == p1.square(p2));

	p1.setXY(-2, -3);
	p2.setXY(-4, 5);
	resault &= (16 == p1.square(p2));

	p1.setXY(-2, -3);
	p2.setXY(-4, -5);
	resault &= (4 == p1.square(p2));

	return resault;
}
bool test_lenght()
{
	//если не пройдена часть теста, тест не пройден целиком
	bool resault = true;
	Point p1, p2;

	//две точки, 4 переменных, каждая - или +
	//попробуем сократить код
	//список ответов
	
	float trueResault[16] =
	{
	2.828427125, 8.246211251, 6.32455532,  10,
	8.246211251, 2.828427125, 10,          6.32455532,
	6.32455532,  10,          2.828427125, 8.246211251,
	10,			 6.32455532,  8.246211251, 2.828427125
	};
	const int x1=2, y1=3, x2=4, y2=5;
	int kx1, ky1, kx2, ky2;
	for (int i = 15; i >=0; i--)
	{
		// 10(10)=1010(2): +2,-3,+4,-5
		//10&8>>3=1, 10&4>>2=0, 10&2>>1=1, 10&1=0
		//0 - ----, 15 - ++++
		kx1 = (i & 8) >> 3 ? 1 : -1;
		ky1 = (i & 4) >> 2 ? 1 : -1;
		kx2 = (i & 2) >> 1 ? 1 : -1;
		ky2 = (i & 1)      ? 1 : -1;
		/*
		cout <<i<<'\t'<< "( " << x1 * kx1 << ", " << y1 * ky1 << " )" << '\t'
			 << "( " << x2 * kx2 << ", " << y2 * ky2 << " )"
			 << endl;
		*/
		p1.setXY(x1*kx1, y1*ky1);
		p2.setXY(x2*kx2, y2*ky2);
		resault = resault && (trueResault[i] == p1.lenght(p2));
		//cout << trueResault[i] << '\t' << p1.lenght(p2) << endl;
		
	}

	return resault;
}



