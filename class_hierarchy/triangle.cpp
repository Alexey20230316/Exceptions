#include<iostream>
#include"triangle.h"
#include"Figure.h"
//#include"err.h"
//#include<string.h>

triangle::triangle()
{
}

triangle::triangle(int a, int A) // равносторонний
{
	if (A != 60)
	{
		throw err("Ошибка создания фигуры. Причина: стороны не равны или углы не 60 градусов.");
	}
		this->a = a;
		this->b = a;
		this->c = a;
		this->A = A;
		this->B = A;
		this->C = A;
		this->tri = "Равносторонний треугольник:";
	
}
triangle::triangle(int a, int c, int A) //равнобедренный
{
	if (a != c)
	{
		throw err("Ошибка создания фигуры. Причина: стороны а и с не равны или углы А и С не равны.");
	}
	this->a = a;
	this->b = a;
	this->c = c;
	this->A = A;
	this->B = (180 - A) / 2;
	this->C = B;
	this->tri = "Равнобедренный треугольник:";
}
triangle::triangle(int a, int b, int c, int A, int B)  // прямоугольный
{
	if (A + B != 90)
	{
		throw err("Ошибка создания фигуры. Причина: угол С не равен 90 градусов.");
	}
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = 90;
	this->tri = "Прямоугольный треугольник:";
}
triangle::triangle(int a, int b, int c, int A, int B, int C)  // треугольник
{
	if ((A + B + C) != 180)
	{
		throw err("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов.");
	}
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->tri = "Tреугольник:";
}

void triangle::Tell()
{	
	std::cout << tri << std::endl;
	std::cout << stor << "a = " << a << "  " << "b = " << b << "  " << "c = " << c << std::endl;
	std::cout << ugl << "A = " << A << "  " << "B = " << B << "  " << "C = " << C << std::endl << std::endl;
};