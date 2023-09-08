#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool PowerOfTwo(int Value) {
    if (Value == 0) return 0; else
  return (ceil(log2(Value)) == floor(log2(Value)));
}






int StepenOfTwo(int Value) {
    return (log10(Value)/log10(2));
}






int main() {
   int n, i;
   cin >> n;
   int arr[n];
   
   for (i = 0; i < n; i++) {
        cin >> arr[i];
        if (PowerOfTwo(arr[i])) arr[i] = pow(3, StepenOfTwo(arr[i]));
   }
   sort(arr, arr+n);
   for (i = 0; i < n; i++) cout << arr[i] << " ";
}
