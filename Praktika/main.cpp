#include <iostream>
#include "Circle.h"

using namespace std;

int main()
    
    //ЧТОБЫ ЧТО-ТО ПРОВЕРИТЬ, ТО ПРОСТО СНЕМИТЕ КОМЕННТАРИИ "/**/" И ЗАПУСКАЙТЕ

{	/*


    //ОКРУЖНОСТЬ


	double rad;
	cout << "Enter radius" << endl;
	cin >> rad;
	Circle circle(rad);

	cout << circle.getRadius() << " - Radius of circle" << endl;
	cout << circle.calculateLenhgt() << " - Lenght of circle" << endl;
	cout << circle.calculateArea() << " - Area of circle" << endl;
	*/

	/*
     
     
    // ТРУГОЛЬНИК


	double side1, side2, side3;
    cout << "Enter side2, side2m side3\n";
    cin >> side1;
    cin >> side2;
    cin >> side3;

    //проверка на существоание треугольника
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        Triangle triangle(side1, side2, side3);
        cout << "Perimetr - " << triangle.caiculatePerimetr() << endl;
        cout << "Area - " << triangle.caiculateArea(triangle.caiculatePerimetr()) << endl;
        cout << "Corner 1 - " << round((triangle.calculateСorner1(side1, side2, side3) * 180) / 3.14) << " gr" << endl;// перевод в ГРАДУСНУЮ меру 
        cout << "Corner 2 - " << round((triangle.calculateСorner2(side1, side2, side3) * 180) / 3.14) << " gr" << endl;
        cout << "Corner 3 - " << round((triangle.calculateСorner3(side1, side2, side3) * 180) / 3.14) << " gr" << endl;
    }
    else {
        cout << "Incorrect data" << endl;
    }
	*/

    //Прямоугольник
    /*
    double side1, side2, side3, side4;
	cout << "Enter 4 sides\n";
	cin >> side1;
	cin >> side2;
	cin >> side3;
	cin >> side4;

	//Проверка что все числа больше 0 и равество диагоналей 
	if (((side1 >= 0) || (side2 >= 0) || (side3 >= 0) || (side4 >= 0)) && ((side1 * side1 + side2 * side2) == (side3 * side3 + side4 * side4))) {
		Rectangle rectangle(side1, side2, side3, side4);
		cout <<"Perimetr - " << rectangle.calculatePerimetr() << endl;
		cout << "Area - " << rectangle.calculateArea() << endl;
		cout << "Side 1 - " << rectangle.getSide1() << " sm\n";
		cout << "Side 2 - " << rectangle.getSide2() << " sm\n";
		cout << "Side 3 - " << rectangle.getSide3() << " sm\n";
		cout << "Side 4 - " << rectangle.getSide4() << " sm\n";
	}
	else {
		cout << "Incorrect data";
	}
    */
	return 0;

}//потом настроим взаимодейстиве между классами 