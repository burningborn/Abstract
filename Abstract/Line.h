#pragma once
#include <iostream>
#include "Roots.h"
using namespace std;

//линейное уравнение сводится к виду: ax + b = 0;

class Line :
    public rootEquation
{
private:
    double a, b;
public:
    Line(double a, double b) : a{ a }, b{ b }{}
    ~Line() {}

    double root()
    {
        cout << "X = ";
        return -b / a;//линейное уравнение x = -b / a
    }
};

