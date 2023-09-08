#include <iostream>
#include <vector>

using namespace std;

struct Factor {
  int prime;
  int power;
};


vector<Factor> Factorisation(int N) {
  vector<Factor> F;
  F.clear();
  int p = 2;
  do {
    if (N % p == 0) {
       Factor FF;
       FF.prime = p;
       FF.power = 0;
       while (N % p == 0) {
          N /= p;
          FF.power++;
       }
       F.push_back(FF);
    }
    p++;
    if (p * 1LL * p > N && N != 1) {
       Factor FF;
       FF.prime = N;
       FF.power = 1;
       F.push_back(FF);
       break;
    }
  } while (N != 1);
  return F;
}

int main() {
  int n, j;
  cin >> n;
  vector<Factor> F = Factorisation(n);
  for (int i = 0; i < F.size(); i++)
    for (j = 0; j<F[i].power; j++)
    if ((j == 0) && (i == 0))
      cout << F[i].prime;
      else
      if ((j > 0) || ((j == 0) && (i != 0)) )
      cout << "*" << F[i].prime;
}
