#include<iostream>
#include"Figure.h"
#include"quadrilateral.h"





// ���������������

	quadrilateral::quadrilateral()
	{
	}
	quadrilateral::quadrilateral(int a)// �������
	{
		this->tri = "�������:";
	}
	quadrilateral::quadrilateral(int a, int b)// �������������
	{
		if (((a == c) || (b == d)) || ((A + B + C + D) == 360))
		{
			throw err("������ �������� ������. �������: ������� ������� �� ����� ��� ����� ����� �� ����� 360 ��������.");
		}
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
		this->tri = "�������������:";
	}
	quadrilateral::quadrilateral(int a, int A, int B)// ����
	{
		if (A == 0 || B == 0 || a == 0)
		{
			throw err("������ �������� ������. �������: ���� ������� �� ����� ��� ������� �� �����.");
		}
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->tri = "����:";
	}
	quadrilateral::quadrilateral(int a, int b, int A, int B)// ��������������
	{
		if (a == b || A == B)
		{
			throw err("������ �������� ������. �������: ���� ��� ������� ������� �� �����.");
		}
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->tri = "��������������:";
	}
	quadrilateral::quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		if ((A + B + C + D) != 360)
		{
			throw err("������ �������� ������. �������: ����� ����� �� ����� 360 ��������.");
		}
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->tri = "���������������:";
	}

	void quadrilateral::Tell()
	{
		std::cout << tri << std::endl;
		std::cout << stor << "a = " << a << "  " << "b = " << b << "  " << "c = " << c << " " << "d = " << d << std::endl;
		std::cout << ugl << "A = " << A << "  " << "B = " << B << "  " << "C = " << C << " " << "D = " << D << std::endl << std::endl;
	}

