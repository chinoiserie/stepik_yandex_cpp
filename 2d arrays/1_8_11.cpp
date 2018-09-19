/* По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа. */

#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int n, m, l = 1;
    cin >> n >> m;
    int a[n][m];
    for (int d = 0; d < n + m; d++)
    {
        for (int j = 0; j < n; j++)
        {
            if (d - j >= 0 && d - j < m)
            {
                a[j][d-j] = l;
                l++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          cout << setw(4) << a[i][j];
        }
        cout << endl;
    }     
    return 0;
} 
