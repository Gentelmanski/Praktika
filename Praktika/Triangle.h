#pragma once
class Triangle
{
public:
	Triangle(double, double, double);

	double caiculatePerimetr();

	double caiculateArea(double);

	double calculateСorner1(double, double, double);

	double calculateСorner2(double, double, double);

	double calculateСorner3(double, double, double);

private:
	double side1, side2, side3;
};

// возможно потребуются геттеры для получения сторон тругольника