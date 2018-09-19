/* Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j

Формат входных данных
Программа получает на вход размеры массива n и m, не превосходящие 100, затем элементы массива, затем числа i и j.

Формат выходных данных
Выведите результат. */

#include <iostream>
using namespace std;
int main() {
    int n, m, temp;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < n; i++) {
        temp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = temp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
    cout << endl;    
    }
    return 0;
}
