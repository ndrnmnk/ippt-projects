#include <iostream>
#include <cmath>  // for pow()
using namespace std;

// helper function to get factorial of a number
long long factorial(int n) {
    if (n > 1) return n*factorial(n-1); else return 1;
}

// function to get 1 member of maclaurin list
double maclaurin_member(double n, int power) {
    return (pow(n, power) / factorial(power));
}

double sin_maclaurin(double x, int terms) {
    int power;
    double term, sum = 0;
    for (int n = 0; n < terms; n++) {
        power = 2 * n + 1;
        term = pow(-1, n) * maclaurin_member(x, power);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int terms = 8;

    cin >> x;

    cout << sin_maclaurin(x, terms) << endl;
}

