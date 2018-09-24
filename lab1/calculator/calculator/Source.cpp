#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	setlocale(0, "");
	float left, right, result = 0;
	char sign;
	bool errorcheck = false;
	cout << "������� ����� �������: ";
	cin >> left;
	cout << "������� ������ �������: ";
	cin >> right;
	cout << "������� ����: ";
	cin >> sign;
	do {
		errorcheck = false;
		switch (sign) {
		case '+': result = left + right;
			break;
		case '-': result = left - right;
			break;
		case '*': result = left * right;
			break;
		case '/': if (right == 0) {
			errorcheck = true;
			cout << "������ �� ���� ������" << endl
				<< "������� ������ �������: ";
			cin >> right;
			} else result = left / right;
			break;
		default: errorcheck = true;
			cout << "������ ������������ ����" << endl
					<< "������� ����: ";
			cin >> sign;
		};
	} while (errorcheck);
	cout << "���������: " << result << endl;
	_getch();
	return 0;
}