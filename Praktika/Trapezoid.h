#pragma once
#include "Quadrilateral.h"

class Trapezoid : public Quadrilateral {
private:
    double base1;
    double base2;
    double height;
    double side1;
    double side2;

public:
    Trapezoid(double, double, double, double, double);

    double calculateArea() override;

    double calculatePerimeter() override;

    void printCorners() override;

    double getBase1();

    double getBase2();

    double getHeight();

    double getSide1();

    double getSide2();
};

