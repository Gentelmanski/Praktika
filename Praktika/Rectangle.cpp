#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::calculateArea() {
	return length * width;
}

double Rectangle::calculatePerimeter() {
	return 2 * (length + width);
}

void Rectangle::printCorners() {
	cout << "Rectangle has all right angles (90 degrees each)." << endl;
}

double Rectangle::getLength() {
	return length;
}

double Rectangle::getWidth() {
	return width;
}