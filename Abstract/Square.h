#pragma once
#include <iostream>
#include "Roots.h"
#include <math.h>
using namespace std;

//���������� ��������� �������� � ����: ax2 + bx + c = 0; 

class Square :
	public rootEquation
{
private:
	double a, b, c;
public:
	Square(double a, double b, double c) :a{ a }, b{ b }, c{ c }{}
	~Square() {}
	void set_abc(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	 }
	double root()
	{
		double D = 0;
		D = b * b - 4 * a * c;	
		if (D > 0) {
			cout << "D > 0 " << endl;
			cout << "X1 = ";
			return (-b + sqrt(D)) / 2 * a;// ���� ��� D > 0 ���� � �2 : -b - sqrt(D)) / 2 * a;
		}
		if (D == 0) {
			cout << "D = 0 " << endl;
			cout << "X1 = ";
			return -b / 2 * a; //���������� ��������� x = -b / 2 * 
		}		
		if (D < 0) {
			cout << "D < 0 " << endl; //��� D ������� ���� ��������� �� ����� ������.
			cout << "Equation has no roots " << endl;		
		}
	}
};

