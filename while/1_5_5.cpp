/* Программа получает на вход последовательность целых неотрицательных чисел, каждое число записано в отдельной строке. 
Последовательность завершается числом 0, при считывании которого программа должна закончить свою работу и вывести количество 
членов последовательности (не считая завершающего числа 0).
Числа, следующие за числом 0, считывать не нужно.

Формат входных данных
Вводится последовательность целых чисел, заканчивающаяся числом 0.

Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>                          
using namespace std;
int main() {
    int i = 0, n;
    while(cin >> n && n && ++i);
    cout << i;
    return 0;
}