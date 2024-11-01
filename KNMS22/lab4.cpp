#include <iostream>
#include <cmath>

using namespace std;

double computeS(double x, int n) {
    double sum = 0.0;

    // Loop for the summation
    for (int k = 1; k <= n; ++k) {
        double term = pow(-1, k+1) * pow(x, 2*k+1) / (4 * pow(k, 2) - 1);
        sum += term;
    }

    return sum;
}

double computeY(double x) {
    return ((1 + x*x) / 2.0) * atan(x) - (x / 2.0);
}

int main() {
    double a, b, h, x;
    int n;

    cout << "Enter a, b, h, n: ";
    cin >> a >> b >> h >> n;

    for (x = a; x < b; x+=h) {
        cout << "x = " << x << "\n";
        cout << "S(x) = " << computeS(x, n) << "\n";
        cout << "Y(x) = " << computeY(x) << "\n";
        cout << "|Y(x) - S(x)| = " << abs(computeY(x) - computeY(x)) << "\n\n\n";
    }


    return 0;
}
