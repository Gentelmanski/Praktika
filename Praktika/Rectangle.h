#pragma once
class Rectangle
{
public:
	Rectangle(double, double, double, double);
	double calculatePerimetr();
	double calculateArea();
	double getSide1();
	double getSide2();
	double getSide3();
	double getSide4();

private:
	double side1, side2, side3, side4;
};

