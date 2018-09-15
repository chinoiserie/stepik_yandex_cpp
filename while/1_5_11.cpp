/* Последовательность Фибоначчи определяется так: 

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число N, что F(N) = A. 
Если А не является числом Фибоначчи, выведите число -1.

Формат входных данных
Вводится натуральное число A > 1.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
    int a, i = 1, f1 = 0, f2 = 1, now = 1;;
    cin >> a;
    while (now < a) {
        now = f1 + f2;
        f1 = f2;
        f2 = now;
        i++;
    } 
    if (now == a)
        cout << i;
    else
        cout << -1;
    return 0;
}
