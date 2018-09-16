/* Выведите все четные элементы массива.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве. */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      if (temp % 2 == 0) {
            a.push_back(temp);
      }
    }
    for (auto now : a) {
    cout << now << " ";
    }
    return 0;
}
