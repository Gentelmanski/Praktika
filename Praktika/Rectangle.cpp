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
	cout << "”глы - у пр€моугольника все углы по 90 градусов" << endl;
}

double Rectangle::getLength() {
	return length;
}

double Rectangle::getWidth() {
	return width;
}