/* Даны действительные коэффициенты a, b, c, при этом a ≠ 0. Решите квадратное уравнение ax^2 + bx + c = 0 и выведите все его корни.

Формат входных данных
Вводятся три действительных числа.

Формат выходных данных
Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, 
если нет корней — не выводите ничего. */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, D = 0, x1 = 0, x2 = 0;
    cin >> a >> b >> c;
    D = pow(b, 2) - 4 * a * c;
    if (D > 0) {
        x1 = (- b + sqrt(D)) / (2 * a);
        x2 = (- b - sqrt(D)) / (2 * a);
        if (x1 < x2) cout << setprecision(6) << fixed << x1 << " " << x2;
        else cout << setprecision(6) << fixed << x2 << " " << x1;
    }
    else if (D == 0) {
        x1 = (- b) / (2 * a);
        cout << setprecision(6) << fixed << x1;
    }
    return 0;
}
