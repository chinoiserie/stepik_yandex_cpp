/*  Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
        ax + by = e
        cx + dy = f
имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.

Формат входных данных
Вводятся шесть чисел - коэффициенты уравнений системы.
Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, d, e, f, delta, delta1, delta2, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    delta = a * d - b * c;
    delta1 = e * d - f * b;
    delta2 = a * f - c * e;
    x = delta1 / delta;
    y = delta2 / delta;
    cout << setprecision(6) << fixed << x << " " << y;
    return 0;
}
