#pragma once
class Triangle
{
public:
	Triangle(double, double, double);

	double caiculatePerimetr();

	double caiculateArea(double);

	double calculate—orner1(double, double, double);

	double calculate—orner2(double, double, double);

	double calculate—orner3(double, double, double);

	double getSide1();

	double getSide2();

	double getSide3();

private:
	double side1, side2, side3;
};