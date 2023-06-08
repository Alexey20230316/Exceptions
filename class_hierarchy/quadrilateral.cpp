#include<iostream>
#include"Figure.h"
#include"quadrilateral.h"





// четырехугольник

	quadrilateral::quadrilateral()
	{
	}
	quadrilateral::quadrilateral(int a)// квадрат
	{
		this->tri = "Квадрат:";
	}
	quadrilateral::quadrilateral(int a, int b)// прямоугольник
	{
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
		this->tri = "Прямоугольник:";
	}
	quadrilateral::quadrilateral(int a, int A, int B)// ромб
	{
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->tri = "Ромб:";
	}
	quadrilateral::quadrilateral(int a, int b, int A, int B)// паралеллограмм
	{
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->tri = "Паралеллограмм:";
	}
	quadrilateral::quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->tri = "Четырехугольник:";
	}

	void quadrilateral::Tell()
	{
		std::cout << tri << std::endl;
		std::cout << stor << "a = " << a << "  " << "b = " << b << "  " << "c = " << c << " " << "d = " << d << std::endl;
		std::cout << ugl << "A = " << A << "  " << "B = " << B << "  " << "C = " << C << " " << "D = " << D << std::endl << std::endl;
	}

