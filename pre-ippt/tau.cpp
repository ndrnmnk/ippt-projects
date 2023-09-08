#include <iostream>
#include <vector>

using namespace std;

struct Factor {
  int prime;
  int power;
};

vector<Factor> factorization(int n) {
  vector<Factor> F;
  F.clear();
  Factor f;
  int d = 2;
  do {
    if (n % d == 0) {
      f.prime = d;
      f.power = 0;
      while (n % d == 0) {
        f.power += 1;
        n /= d;
      }
      F.push_back(f);
    }
    if (d * 1LL * d > n && n != 1) {
      F.push_back({n, 1});
      break;
    }
    d++;
  } while (n != 1);
  return F;
}

int tau(int n) {
  vector<Factor> F = factorization(n);
  int ans = 1;
  for (size_t i = 0; i < F.size(); i++)
    ans = ans * (F[i].power + 1);
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << tau(n) << '\n';
  return 0;
}

