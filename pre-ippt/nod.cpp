#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  while (b != 0) {
    a = a % b;
    swap(a, b);
  }
  return a;
}

int main() {
  int a, b, c;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
  return 0;
}
