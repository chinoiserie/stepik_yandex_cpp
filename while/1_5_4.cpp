/* Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
    int i = 1, n;
    cin >> n;
    while (i < n) {
        i *= 2;
    }
    if (i == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
  return 0;
}
