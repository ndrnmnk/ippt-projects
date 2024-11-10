#include <iostream>
using namespace std;

class LCG {
private:
    int a, b, p, i;

protected:
    int temp;

public:
    LCG() {
        cout << "Enter a, b, p, i (a, b - just integers; p - prime number; i - integer above 0)\n";
        cin >> a >> b >> p >> i;
        cout << generate_random(i) << endl;
    }

    int generate_random(int i) {
        if (i > 0) return generate_random(i-1)*a+b % p;
        else return 1;
    }


    friend class NSD;
};

class NSD {
public:
    void check_a_b(LCG& t) {
        if (areCoprime(t.a, t.b)) cout << "a and b are conprime\n";
        else cout << "a and b are not conprime\n";
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    bool areCoprime(int a, int b) {
        return gcd(a, b) == 1;
    }
};


int main()
{
    LCG g;
    NSD fri;
    fri.check_a_b(g);
}