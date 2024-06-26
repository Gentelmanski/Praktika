#include <iostream>
#include <stdlib.h>
#include "Circle.h"
#include "Parallelogram.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

void paral() {
	double base, height;
	cout << "Введите основание параллелограма: " << '\n';
	cin >> base;

	cout << "Введите высоту: " << '\n';
	cin >> height;


	Parallelogram parallelogram(base, height);

	cout << '\n' << "Информация о фигуре: " << '\n' << '\n';
	cout << "Основание: " << parallelogram.getBase() << '\n';
	cout << "Углы: ";
	parallelogram.printCorners();

	cout << "Периметр: " << parallelogram.calculatePerimeter() << '\n';
	cout << "Площадь: " << parallelogram.calculateArea() << '\n';

}

void circle() {
	double rad;
	cout << "Введите радиус окружности: " << '\n';
	cin >> rad;

	Circle circle(rad);

	cout << '\n' << "Информация о фигуре: " << '\n' << '\n';

	cout << "Радиус: " << circle.getRadius() << '\n';
	cout << "Длина окружности: " << circle.calculateLenhgt() << '\n';
	cout << "Площадь: " << circle.calculateArea() << '\n';

}

void triangl() {

	double side1, side2, side3;
	cout << "Введите сторону 1" << "\n";
	cin >> side1;
	cout << "Введите сторону 2" << "\n";
	cin >> side2;
	cout << "Введите сторону 3" << "\n";
	cin >> side3;

	//проверка на существоание треугольника
	if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
		Triangle triangle(side1, side2, side3);

		cout << '\n' << "Информация о фигуре: " << '\n' << '\n';
		cout << "Периметр: " << triangle.caiculatePerimetr() << '\n';
		cout << "Площадь: " << triangle.caiculateArea(triangle.caiculatePerimetr()) << '\n';
		cout << "Угол 1: " << round((triangle.calculateСorner1(side1, side2, side3) * 180) / 3.14) << " gr" << '\n';
		cout << "Угол 2: " << round((triangle.calculateСorner2(side1, side2, side3) * 180) / 3.14) << " gr" << '\n';
		cout << "Угол 3: " << round((triangle.calculateСorner3(side1, side2, side3) * 180) / 3.14) << " gr" << '\n';

	}
	else {
		cout << "Incorrect data" << endl;
	}

}

void rect() {

	double side1, side2;
	cout << "Введите сторону 1" << "\n";
	cin >> side1;
	cout << "Введите сторону 2" << "\n";
	cin >> side2;

	//Проверка что все числа больше 0 и равество диагоналей 

	Rectangle rectangle(side1, side2);
	cout << '\n' << "Информация о фигуре: " << '\n' << '\n';
	cout << "Периметр: " << rectangle.calculatePerimeter() << '\n';
	cout << "Площадь: " << rectangle.calculateArea() << '\n';
	cout << "Сторона 1: " << rectangle.getLength() << " sm" << '\n';
	cout << "Сторона 2: " << rectangle.getWidth() << " sm" << '\n';
	cout << "Сторона 3: " << rectangle.getLength() << " sm" << '\n';
	cout << "Сторона 4: " << rectangle.getWidth() << " sm" << '\n';


}

void quad() {

}
void boba() {
	cout << '\n' << "Выберите фигуру: " << '\n' << '\n';

	cout << "1. Круг " << '\n' << "2. Параллелограмм " << '\n' << "3. Прямоугольник " << '\n' << "4. Треугольник " << '\n' << '\n';

	int choice;

	cin >> choice;


	switch (choice) {
	case 1:
		circle();
		break;
	case 2:
		paral();
		break;
	case 3:
		rect();
		break;
	case 4:
		triangl();
		break;
	}
}

int main() {

	setlocale(LC_ALL, "Russian");

	int raknagore = 1;
	int svisnet = 0;

	int b;
	while (raknagore != svisnet) {
		boba();
	}
	return 0;
}

    //ЧТОБЫ ЧТО-ТО ПРОВЕРИТЬ, ТО ПРОСТО СНЕМИТЕ КОМЕННТАРИИ "/**/" И ЗАПУСКАЙТЕ

	/*

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
	cin >> side4;                                     /hui/

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
