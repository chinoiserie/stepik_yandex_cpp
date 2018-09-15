/*  Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой 
последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, 
а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
int max = 1, now, i;
cin >> now;
i = now;
while (now != 0) {
    cin >> now;
    if (now >= i) {
        max = i;
        i = now;
    }
    else if (now >= max) {
            max = now;
    }
}
cout << max;
return 0;
}
