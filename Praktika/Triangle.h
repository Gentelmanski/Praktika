#pragma once
class Triangle
{
public:
	Triangle(double, double, double);

	double caiculatePerimetr();

	double caiculateArea(double);

	double calculateŅorner1(double, double, double);

	double calculateŅorner2(double, double, double);

	double calculateŅorner3(double, double, double);

private:
	double side1, side2, side3;
};

