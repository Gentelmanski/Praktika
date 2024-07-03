#include "Trapezoid.h"
#include <iostream>

using namespace std;

Trapezoid::Trapezoid(double b1, double b2, double h, double s1, double s2) : base1(b1), base2(b2), height(h), side1(s1), side2(s2) {}

double Trapezoid::calculateArea() {
	return 0.5 * (base1 + base2) * height;
}

double Trapezoid::calculatePerimeter() {
	return base1 + base2 + side1 + side2;
}

void Trapezoid::printCorners() {
	cout << "”глы - у трпеции все углы различны" << endl;
}

double Trapezoid::getBase1() {
	return base1;
}

double Trapezoid::getBase2() {
	return base2;
}

double Trapezoid::getHeight() {
	return height;
}

double Trapezoid::getSide1() {
	return side1;
}

double Trapezoid::getSide2() {
	return side2;
}