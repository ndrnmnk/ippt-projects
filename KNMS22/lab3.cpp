#include <iostream>
#include <cmath>

using namespace std;

double calculateY(double z, double a, double b, int func) {
    double x, phi;

    if (z <= 0) {
        cout << "z < 0, using z^2/2\n";
        x = (z * z) / 2.0;
    } else {
        cout << "z > 0, using sqrt(z)\n";
        x = sqrt(z);
    }

    switch (func) {
        case 0: phi = x*x; cout << "using x^2 as function\n"; break;
        case 1: phi = 2*x; cout << "using x*2 as function\n"; break;
        case 2: phi =  x/3; cout << "using x/3 as function\n"; break;
    }

    double y = (2.0 / 3.0) * a * pow(sin(x), 2) - (3.0 / 4.0) * b * pow(cos(phi), 2);

    return y;
}

int main() {
    double z, a, b;
    int func;
    
    cout << "Enter value for z: ";
    cin >> z;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Function to use: ";
    cin >> func;

    cout << calculateY(z, a, b, func) << std::endl;

    return 0;
}
