#include <iostream>
#include <cmath>

using namespace std;

double calculatePsi(double x, double y, double z) {
    // Calculate x^(y/x)
    double term1 = pow(x, y / x);
    // Calculate cube root of (y/x)
    double term2 = cbrt(y / x);
    // Calculate (y - x)
    double diff = y - x;
    // Calculate cos(y - z) / (y - x)
    double cos_term = cos(y - z) / diff;
    // Calculate denominator (1 + (y - x)^2)
    double denominator = 1 + pow(diff, 2);
    // Full expression
    double psi = abs(term1 - term2) + (diff * (cos_term / denominator));

    return psi;
}

int main() {
    double x, y, z;

    cout << "Input x:\n";
    cin >> x;
    cout << "Input y:\n";
    cin >> y;
    cout << "Input z:\n";
    cin >> z;

    cout << "x = " << x << "; y = " << y << "; z = " << z << endl;

    cout << "Result = " << calculatePsi(x, y, z) << endl;

    return 0;
}