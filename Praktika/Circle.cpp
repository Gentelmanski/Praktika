#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() {
	return radius;
}

double Circle::calculateLenhgt() {
	return 2 * 3.14 * radius;
}

double Circle::calculateArea() {
	return 3.14 * radius * radius;
}