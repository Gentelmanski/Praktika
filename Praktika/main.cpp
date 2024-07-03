#include <iostream>
#include <stdlib.h>
#include "Circle.h"
#include "Parallelogram.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"

using namespace std;

void paral() {
	double base, height;
	cout << "Введите основание параллелограма: " << '\n';
	cin >> base;

	cout << "Введите высоту: " << '\n';
	cin >> height;

	//Существоание параллелограмма
	if ((base > 0) && (height > 0)) {
		Parallelogram parallelogram(base, height);

		cout << '\n' << "Информация о фигуре: " << '\n' << '\n';
		cout << "Основание: " << parallelogram.getBase() << '\n';
		cout << "Углы: ";
		parallelogram.printCorners();

		cout << "Периметр: " << parallelogram.calculatePerimeter() << '\n';
		cout << "Площадь: " << parallelogram.calculateArea() << '\n';
		parallelogram.printCorners();
	}
	else {
		cout << "Неверные данные";
	}
	

}

void circle() {
	double rad;
	cout << "Введите радиус окружности: " << '\n';
	cin >> rad;

	//Существоание круга
	if (rad > 0) {
		Circle circle(rad);

		cout << '\n' << "Информация о фигуре: " << '\n' << '\n';

		cout << "Радиус: " << circle.getRadius() << '\n';
		cout << "Длина окружности: " << circle.calculateLenhgt() << '\n';
		cout << "Площадь: " << circle.calculateArea() << '\n';
	}
	else {
		cout << "Неверные данные";
	}

	

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
		cout << "Угол 1: " << round((triangle.calculateСorner1(side1, side2, side3) * 180) / 3.14) << '\n';
		cout << "Угол 2: " << round((triangle.calculateСorner2(side1, side2, side3) * 180) / 3.14) << '\n';
		cout << "Угол 3: " << round((triangle.calculateСorner3(side1, side2, side3) * 180) / 3.14) << '\n';

	}
	else {
		cout << "Неверные данные" << endl;
	}

}

void rect() {

	double length, width;
	cout << "Введите сторону длинну" << "\n";
	cin >> length;
	cout << "Введите сторону ширину" << "\n";
	cin >> width;

	//Проверка что все числа больше 0 и равество диагоналей - существоание прмоугольника
	if (((length >= 0) && (width >= 0) && (length >= 0) && (width >= 0)) && ((length * length + width * width) == (length * length + width * width))) {
		Rectangle rectangle(length, width);
		cout << "Периметр - " << rectangle.calculatePerimeter() << endl;
		cout << "Площадь - " << rectangle.calculateArea() << endl;
		cout << "Длинна - " << rectangle.getLength() << endl;
		cout << "Ширина - " << rectangle.getWidth() << endl;
		rectangle.printCorners();
	}
	else {
		cout << "Неыерные данные";
	}


}

void trap() {
	double base1, base2, height, side1, side2;

	cout << "Введите основанеие 1" << '\n';
	cin >> base1;

	cout << "Введите основание 2" << '\n';
	cin >> base2;

	cout << "Введите высоту" << '\n';
	cin >> height;

	cout << "Введите боковую сторону 1" << '\n';
	cin >> side1;
	cout << "Введите боковую сторону 2" << '\n';
	cin >> side2;

	//Существание трапеции
	if ((base1 + base2) > (side1 + side2)) {

		Trapezoid trapezoid(base1, base2, height, side1, side2);\

		cout << "Периметр - " << trapezoid.calculatePerimeter() << endl;
		cout << "Площадь - " << trapezoid.calculateArea() << endl;
		cout << "Основание 1 - " << trapezoid.getBase1() << endl;
		cout << "Оcнование 2 - " << trapezoid.getBase2() << endl;
		cout << "Высота - " << trapezoid.getHeight() << endl;
		cout << "Боковая сторона 1 - " << trapezoid.getSide1() << endl;
		cout << "Боковая сторона 2 - " << trapezoid.getSide2() << endl;
		trapezoid.printCorners();
	}
	else {
		cout << "Неверные данные";
	}
}

void line() {
	cout << "=======================\n";
}

void interface() {

	cout << "Выберите фигуру: \n";

	cout << "1. Круг\n" << "2. Параллелограмм\n" << "3. Прямоугольник\n" << "4. Треугольник\n" << "5. Трапеция\n";

	line();

	int choice;

	cin >> choice;

	switch (choice) {
	case 1:
		cout << "\033[2J\033[1;1H";
		circle();
		break;
	case 2:
		cout << "\033[2J\033[1;1H";
		paral();
		break;
	case 3:
		cout << "\033[2J\033[1;1H";
		rect();
		break;
	case 4:
		cout << "\033[2J\033[1;1H";
		triangl();
		break;
	case 5:
		cout << "\033[2J\033[1;1H";
		trap();
		break;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	interface();
	return 0;
}