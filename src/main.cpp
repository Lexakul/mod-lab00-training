#include "fun.h"
#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int64_t x;
	uint16_t n;
	cout << "Введите целое число которое нужно возвести в степень " << endl;
	cin >> x; 
	cout << "Введите положительную целую степень числа " << endl;
	cin >> n;
	cout << "Ответ: " << power(x, n);
}
