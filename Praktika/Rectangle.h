#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
private:
    double length;
    double width;

public:
    Rectangle(double, double);

    double calculateArea()  override;

    double calculatePerimeter() override;

    void printCorners() override;

    double getLength();

    double getWidth();
};

