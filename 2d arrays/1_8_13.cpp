/* По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла 
и закрученной по часовой стрелке.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа. */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
           a[i][j] = 0;
        }
    }
    int c = 0, i = 0, j = -1;
    while(c < m * n){
        while(a[i][j + 1] == 0 && j < m - 1)
            a[i][++j] = ++c;
        while(a[i + 1][j] == 0 && i < n - 1)
            a[++i][j] = ++c;
        while(a[i][j - 1] == 0 && j > 0)
            a[i][--j] = ++c;
        while(a[i - 1][j] == 0 && i > 0)
            a[--i][j] = ++c;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
                cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
