/* Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, 
или ноль, если они равны.

Формат входных данных
Вводятся два числа.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << (a != b) + (b > a);
	return 0;
}
