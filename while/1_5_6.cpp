/*  Определите сумму всех элементов последовательности, завершающейся числом 0.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, 
а служит как признак ее окончания.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
int n = 0, now;
cin >> now;
while (now != 0) {
    n += now;
    cin >> now;
} cout << n;
  return 0;
}