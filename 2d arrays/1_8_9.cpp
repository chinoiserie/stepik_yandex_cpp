/* Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.

Формат входных данных
Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.

Формат выходных данных
Выведите получившийся массив. Числа при выводе разделяйте одним пробелом. */

#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
  for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }                
    return 0;
}
