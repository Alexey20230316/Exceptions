#include<iostream>
#include"triangle.h"
#include"Figure.h"
//#include"err.h"
//#include<string.h>

triangle::triangle()
{
}

triangle::triangle(int a, int A) // ��������������
{
	if (A != 60)
	{
		throw err("������ �������� ������. �������: ������� �� ����� ��� ���� �� 60 ��������.");
	}
		this->a = a;
		this->b = a;
		this->c = a;
		this->A = A;
		this->B = A;
		this->C = A;
		this->tri = "�������������� �����������:";
	
}
triangle::triangle(int a, int c, int A) //��������������
{
	if (a != c)
	{
		throw err("������ �������� ������. �������: ������� � � � �� ����� ��� ���� � � � �� �����.");
	}
	this->a = a;
	this->b = a;
	this->c = c;
	this->A = A;
	this->B = (180 - A) / 2;
	this->C = B;
	this->tri = "�������������� �����������:";
}
triangle::triangle(int a, int b, int c, int A, int B)  // �������������
{
	if (A + B != 90)
	{
		throw err("������ �������� ������. �������: ���� � �� ����� 90 ��������.");
	}
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = 90;
	this->tri = "������������� �����������:";
}
triangle::triangle(int a, int b, int c, int A, int B, int C)  // �����������
{
	if ((A + B + C) != 180)
	{
		throw err("������ �������� ������. �������: ����� ����� �� ����� 180 ��������.");
	}
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->tri = "T����������:";
}

void triangle::Tell()
{	
	std::cout << tri << std::endl;
	std::cout << stor << "a = " << a << "  " << "b = " << b << "  " << "c = " << c << std::endl;
	std::cout << ugl << "A = " << A << "  " << "B = " << B << "  " << "C = " << C << std::endl << std::endl;
};