/* Дано нечетное число n, не превосходящее 15. Создайте двумерный массив из n×n элементов, заполнив его символами "." (каждый элемент 
массива является строкой из одного символа). Затем заполните символами "*" среднюю строку массива, средний столбец массива, главную 
диагональ и побочную диагональ. В результате "*" в массиве должны образовывать изображение звездочки. Выведите полученный массив на 
экран, разделяя элементы массива пробелами. */

#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cin >> n;
    int a[15][15];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {                              
                a[i][j] = 0;            
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j) || (i == (n / 2)) || (j == (n / 2)) || (i == (n - 1) - j)) {                               
                a[i][j] = 1;
            }            
        }
    }
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (a[i][j] == 1) {
            cout << "*" << " ";
        } 
        else if (a[i][j] == 0) {
            cout << "." << " ";
        }
    }
    cout << endl;
}       
    return 0;
}