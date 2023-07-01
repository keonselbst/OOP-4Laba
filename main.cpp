#include <iostream>
#include <Windows.h>
#include "Triangle.h"
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	double x1, x2, x3, y1, y2, y3;
	cout << "������� ���������� ������ �����:\n";
	cin >> x1 >> y1;
	cout << "������� ���������� ������ �����:\n";
	cin >> x2 >> y2;
	cout << "������� ���������� ������� �����:\n";
	cin >> x3 >> y3;
	Triangle* A = new Triangle(x1, y1, x2, y2, x3, y3);
	int c = -1;
	while (c != 0) {
		cout << "�������� ����� ����:\n";
		cout << "1. ������� ���������� ������������.\n";
		cout << "2. ������� ���������� ������������ � �������� �����������.\n";
		cout << "3. �������� ���������� ������ �����.\n";
		cout << "4. �������� ���������� ������ �����.\n";
		cout << "5. �������� ���������� ������� �����.\n";
		cout << "6. ������� ������� ������������.\n";
		cout << "7. ������� �������� ������������.\n";
		cout << "8. ������� ������ ������������.\n";
		cout << "9. ���������� ��� ������������.\n";
		cout << "0. ��������� ������ ���������.\n";
		cin >> c;
		switch (c) {
		case 1: {
			cout << *A << '\n';
			break;
		}
		case 2: {
			cout << "1 �����:\n������: " << A->getP1().toPolar().first << ", ����: " << A->getP1().toPolar().second << '\n';
			cout << "2 �����:\n������: " << A->getP2().toPolar().first << ", ����: " << A->getP2().toPolar().second << '\n';
			cout << "3 �����:\n������: " << A->getP3().toPolar().first << ", ����: " << A->getP3().toPolar().second << '\n';
			break;
		}
		case 3: {
			double tmpx, tmpy;
			cout << "������� ����� ���������� �����:\n";
			cin >> tmpx >> tmpy;
			A->setP1(tmpx, tmpy);
			break;
		}
		case 4: {
			double tmpx, tmpy;
			cout << "������� ����� ���������� �����:\n";
			cin >> tmpx >> tmpy;
			A->setP2(tmpx, tmpy);
			break;
		}
		case 5: {
			double tmpx, tmpy;
			cout << "������� ����� ���������� �����:\n";
			cin >> tmpx >> tmpy;
			A->setP3(tmpx, tmpy);
			break;
		}
		case 6: {
			cout << "������� ������������: " << A->getSquare() << '\n';
			break;
		}
		case 7: {
			cout << "�������� ������������: " << A->getPerimeter() << '\n';
			break;
		}
		case 8: {
			cout << "������ A: " << A->getHeightA() << '\n';
			cout << "������ B: " << A->getHeightB() << '\n';
			cout << "������ C: " << A->getHeightC() << '\n';
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