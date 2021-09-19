#include <iostream>
//#include < math.h >
using namespace std;

#include "Roots.h"
#include "Line.h"
#include "Square.h"

#define delimiter "\n===============\n"

void main()
{
	setlocale(LC_ALL, "Russian");

	Line line(3,6);
	cout << line.root() << endl;
	cout << delimiter;
	Square square(1, 2, 1);
	cout << square.root() << endl;
	cout << delimiter;
	square.set_abc(3, 7, 3);
	cout << square.root() << endl;

}