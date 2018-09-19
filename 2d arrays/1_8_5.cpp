/* Дано число n, не превосходящее 10, и массив размером n × n. Проверьте, является ли этот массив симметричным относительно главной диагонали. 
Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае. */

#include <iostream>
using namespace std;
int main() {
    int n, f = 1;
    cin >> n;
    int a[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
            f = 0;
            }
        }
    }
    if (f == 1) cout << "YES";   
    else cout << "NO";
    return 0;
}
