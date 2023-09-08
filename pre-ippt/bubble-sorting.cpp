#include <iostream>
using namespace std;
int outp;

int main()
{
    int n;
    int i;
    int j;
    int temp;
    int* arr = new int[n];
    cin >> n;
    outp=0;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                outp++;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << outp;
}
