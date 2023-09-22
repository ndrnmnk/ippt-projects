#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char c;
    while (1) {
        cout << "Enter number 1:";
        cin >> a;
        cout << "Enter number 2:";
        cin >> b;
        cout << "What to do?";
        cin >> c;
        if (c == '+') cout << a+b << endl; else
        if (c == '-') cout << a-b << endl; else
        if (c == '*') cout << a*b << endl; else
        if ((c == '/') && (b != 0)) cout << a/b << endl; else
        cout << "Error\n";
        cout << "Calculate something else? [Y/n]\n";
        cin >> c;
        if (c != 'y') {
            cout << "OK\n";
            exit(0);
        }
    }
}
