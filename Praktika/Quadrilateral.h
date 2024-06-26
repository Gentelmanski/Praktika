#pragma once
class Quadrilateral {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
    virtual void printCorners() = 0;
};
