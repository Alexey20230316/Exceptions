#pragma once
#include"Figure.h"
#include"err.h"
#include<stdexcept>
#include<iostream>


// ���������������
class quadrilateral :public figure
{
public:
	quadrilateral();
	
	quadrilateral(int a);// �������
	
	quadrilateral(int a, int b);// �������������
	
	quadrilateral(int a, int A, int B);// ����
	
	quadrilateral(int a, int b, int A, int B);// ��������������
	
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
	std::string stor = "�������:\t";
	std::string ugl = "����:\t\t";
};

