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



int main() {

	setlocale(LC_ALL, "Russian");

	// треугольник
	triangle q(2, 2, 2, 30, 30, 30);
	q.Tell();


	// равносторонний
	equilateral a(4, 5);
	a.Tell();

	// прямоугольный
	rectangular b(3, 4, 5, 60, 80);
	b.Tell();


	// равнобедренный
	isosceles c(22, 10, 45);
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
	parallellogram n(10, 10, 70, 110);
	n.Tell();

	// ромб
	rhomb v(35, 10, 170);
	v.Tell();





}
