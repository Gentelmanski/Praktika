#include "Parallelogram.h"
#include <iostream>

using namespace std;

Parallelogram::Parallelogram(double b, double h) : base(b), height(h) {}

double Parallelogram::calculateArea() {
	return base * height;
}

double Parallelogram::calculatePerimeter() {
	return 2 * (base + height);
}

void Parallelogram::printCorners() {
	cout << "���� - � ��������������� ��������������� ���� �����" << endl;
}

double Parallelogram::getBase() {
	return base;
}

double Parallelogram::getHeight() {
	return height;
}