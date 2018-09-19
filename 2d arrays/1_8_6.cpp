/* Дан квадратный двумерный массив размером n×n и число k. Выведите элементы k-й по счету диагонали ниже главной диагонали 
(т.е. если k = 1, то нужно вывести элементы первой диагонали, лежащей ниже главной, если k = 2, то второй диагонали и т.д.).
Значение k может быть отрицательным, например, если k = −1, то нужно вывести значение первой диагонали лежащей выше главной. 
Если k = 0, то нужно вывести элементы главной диагонали.

Программа получает на вход число n, не превосходящие 10, затем массив размером n×n, затем число k. */

#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cin >> n;
    int a[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];           
        }
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i - j) == k) {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}
