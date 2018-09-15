/* Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
    int n, f = 1, i = 1, a = 2;
    cin >> n;
    if (n == 0) {
        f = 0;
    }
    else if (n == 1) {
        f = 1;
    }
    else if (n == 2) {
        f = 1;
    }
    else {
        while (n != a) {
            f = f + i;
            i = f - i;
            a = a + 1;
        } 
    }
    cout << f;
    return 0;
}