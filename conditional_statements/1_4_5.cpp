/* Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 
2 (если два совпадает) или 0 (если все числа различны).

Формат входных данных
Вводятся три числа.

Формат выходных данных
Выведите ответ на задачу. */ 

#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "3";
    } else if (a == b || b == c || a == c) {
        cout << "2";
    } else {
        cout << "0"; }
  return 0;
}