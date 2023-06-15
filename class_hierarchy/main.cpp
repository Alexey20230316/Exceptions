

#include<stdexcept>

#include<iostream>
#include<string>
#include"Figure.h"
#include"triangle.h"
#include"equilateral.h"
#include"rectangular.h"
#include"isosceles.h"
#include"parallellogram.h"
#include"rectangle.h"
#include"quadrilateral.h"
#include"rhomb.h"
#include"square.h"
#include"err.h"



int main() {

	setlocale(LC_ALL, "Russian");


	try
	{
		
		// треугольник
		triangle q(2, 2, 2, 60, 60, 60);
		q.Tell();

		
		// равносторонний
		equilateral a(4, 60);
		a.Tell();

		// прямоугольный
		rectangular b(3, 4, 5, 60, 30);
		b.Tell();


		// равнобедренный
		isosceles c(22, 22, 45);
		c.Tell();

		// четырехугольник
		quadrilateral d(44, 44, 44, 44, 80, 100, 80, 100);
		d.Tell();

		// прямоугольник
		rectangle e(500, 500);
		e.Tell();

		// квадрат
		square m(1000);
		m.Tell();

		// паралеллограмм
		parallellogram n(10, 20, 70, 110);
		n.Tell();

		// ромб
		rhomb v(8, 10, 170);
		v.Tell();

	}
	catch (const err& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Неизвестная ошибка." << std::endl;
	}


}
