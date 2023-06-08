#pragma once
#include"Figure.h"



// четырехугольник
class quadrilateral :public figure
{
public:
	quadrilateral();
	
	quadrilateral(int a);// квадрат
	
	quadrilateral(int a, int b);// прямоугольник
	
	quadrilateral(int a, int A, int B);// ромб
	
	quadrilateral(int a, int b, int A, int B);// паралеллограмм
	
	quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	

	void Tell()override;
	

private:
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

