#include <iostream>
#include <cmath>
using namespace std;

template <typename T1, typename T2, typename T3>
auto geometricMean(T1 a, T2 b, T3 c) {
    return pow(a * b * c, 1.0 / 3);
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    cout << "Введiть три цiлих додатнiх числа" << endl;
    int a, b, c;
    cout << "Перше число: ";
    cin >> a;
    cout << "Друге число: ";
    cin >> b;
    cout << "Третє число: ";
    cin >> c;
    auto result = geometricMean(a, b, c);
    cout << "Середнє геометричне чисел " << a << ", " << b << ", " << c << " дорiвнює " << result << endl;
    return 0;
}