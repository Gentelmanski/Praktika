#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

double Triangle::caiculatePerimetr() {
	double perimetr = side1 + side2 + side3;
	return perimetr;
}
//расчет идет по формуле Герона
double Triangle::caiculateArea(double per) {
	double per05 = per / 2;
	return sqrt(per05 * (per05 - side1) * (per05 - side2) * (per05 - side3));
}
//Расчет идет по теореме косинусов, для полученние РАДИАННОЙ меры угла
double Triangle::calculateСorner1(double side1, double side2, double side3) {
	return acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
}

double Triangle::calculateСorner2(double side1, double side2, double side3) {
	return acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
}

double Triangle::calculateСorner3(double side1, double side2, double side3) {
	return acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3));
}

double Triangle::getSide1() {
	return side1;
}

double Triangle::getSide2() {
	return side2;
}

double Triangle::getSide3() {
	return side3;
}