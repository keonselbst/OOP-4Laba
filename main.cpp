#include <iostream>
#include <Windows.h>
#include "Triangle.h"
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	double x1, x2, x3, y1, y2, y3;
	cout << "Введите координаты первой точки:\n";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки:\n";
	cin >> x2 >> y2;
	cout << "Введите координаты третьей точки:\n";
	cin >> x3 >> y3;
	Triangle* A = new Triangle(x1, y1, x2, y2, x3, y3);
	int c = -1;
	while (c != 0) {
		cout << "Выберите пункт меню:\n";
		cout << "1. Вывести координаты треугольника.\n";
		cout << "2. Вывести координаты треугольника в полярных координатах.\n";
		cout << "3. Изменить координаты первой точки.\n";
		cout << "4. Изменить координаты второй точки.\n";
		cout << "5. Изменить координаты третьей точки.\n";
		cout << "6. Вывести площадь треугольника.\n";
		cout << "7. Вывести периметр треугольника.\n";
		cout << "8. Вывести высоты треугольника.\n";
		cout << "9. Определить вид треугольника.\n";
		cout << "0. Завершить работу программы.\n";
		cin >> c;
		switch (c) {
		case 1: {
			cout << *A << '\n';
			break;
		}
		case 2: {
			cout << "1 точка:\nРадиус: " << A->getP1().toPolar().first << ", угол: " << A->getP1().toPolar().second << '\n';
			cout << "2 точка:\nРадиус: " << A->getP2().toPolar().first << ", угол: " << A->getP2().toPolar().second << '\n';
			cout << "3 точка:\nРадиус: " << A->getP3().toPolar().first << ", угол: " << A->getP3().toPolar().second << '\n';
			break;
		}
		case 3: {
			double tmpx, tmpy;
			cout << "Введите новые координаты точки:\n";
			cin >> tmpx >> tmpy;
			A->setP1(tmpx, tmpy);
			break;
		}
		case 4: {
			double tmpx, tmpy;
			cout << "Введите новые координаты точки:\n";
			cin >> tmpx >> tmpy;
			A->setP2(tmpx, tmpy);
			break;
		}
		case 5: {
			double tmpx, tmpy;
			cout << "Введите новые координаты точки:\n";
			cin >> tmpx >> tmpy;
			A->setP3(tmpx, tmpy);
			break;
		}
		case 6: {
			cout << "Площадь треугольника: " << A->getSquare() << '\n';
			break;
		}
		case 7: {
			cout << "Периметр треугольника: " << A->getPerimeter() << '\n';
			break;
		}
		case 8: {
			cout << "Высота A: " << A->getHeightA() << '\n';
			cout << "Высота B: " << A->getHeightB() << '\n';
			cout << "Высота C: " << A->getHeightC() << '\n';
			break;
		}
		case 9: {
			cout << A->getTriangleType() << '\n';
			break;
		}
		default:
			break;
		}
	}
	delete A;
	return 0;
}