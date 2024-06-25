#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	double rad;
	cout << "Enter radius" << endl;
	cin >> rad;
	Circle circle(rad);

	cout << circle.getRadius() << " - Radius of circle" << endl;
	cout << circle.calculateLenhgt() << " - Lenght of circle" << endl;
	cout << circle.calculateArea() << " - Area of circle" << endl;
	return 0;

}