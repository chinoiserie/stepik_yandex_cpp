/* По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”.

Формат входных данных
Вводятся два числа n и m, каждое из которых не превышает 30.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа. */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, k = 1;
    cin >> n >> m;
    int a[30][30];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = k;
            k++;
    }
  }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {                               
                cout << setw(4) << a[i][j]; 
            }
            cout << endl;
        }
        else {
            for (int j = m - 1; j >= 0; j--) {               
                cout << setw(4) << a[i][j]; 
            }
            cout << endl;
        }
    }
    return 0;
}
 
