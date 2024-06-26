#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
private:
    double base;
    double height;

public:
    Parallelogram(double, double);

    double calculateArea() override;

    double calculatePerimeter() override;

    void printCorners() override;

    double getHeight();

    double getBase();
};


