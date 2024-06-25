#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle(double s1, double s2, double s3, double s4) : side1(s1), side2(s2), side3(s3), side4(s4) {}

double Rectangle::calculatePerimetr() {
	return side1 + side2 + side3 + side4;
}

double Rectangle::calculateArea() {
	return side1 * side2;
}

double Rectangle::getSide1() {
	return side1;
}

double Rectangle::getSide2() {
	return side2;
}

double Rectangle::getSide3() {
	return side3;
}

double Rectangle::getSide4() {
	return side4;
}