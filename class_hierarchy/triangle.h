#pragma once
#include<iostream>
#include"Figure.h"

class triangle :public figure
{
public:
	triangle();
	
	triangle(int a, int A); // равносторонний
	
	triangle(int a, int c, int A); //равнобедренный
	
	triangle(int a, int b, int c, int A, int B);  // прямоугольный
	
	triangle(int a, int b, int c, int A, int B, int C);  // треугольник
	
	void Tell();

protected:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	std::string tri;
	std::string stor = "Стороны:\t";
	std::string ugl = "Углы:\t\t";
};
