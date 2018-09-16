/* Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            cout << a[i] << " ";
        }
    }
    return 0;
}