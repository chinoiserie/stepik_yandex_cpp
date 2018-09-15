/* Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки 
на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом 
для второй клетки.

Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом слона можно попасть во вторую или NO в противном случае. */

#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (((a - c) * (a - c)) == ((b - d) * (b - d))) {
        cout << "YES";
    } else {
        cout << "NO";}
  return 0;
}
