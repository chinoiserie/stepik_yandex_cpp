/* Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
  int a, b, c, t;
  cin >> a >> b >> c;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    cout << a << " " << b << " " << c;   
return 0;
}
