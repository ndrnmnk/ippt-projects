#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double s, temp1 = 0, temp2 = 0;
    int n, i;
    cin >> n;
    int arr[n][2] = {};
    for (i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];
    for (i = 1; i < n; i++) temp1 += arr[i-1][0]*arr[i][1];
    temp1 += arr[n-1][0]*arr[0][1];
    for (i = 1; i < n; i++) temp2 += arr[i-1][1]*arr[i][0];
    temp2 += arr[n-1][1]*arr[0][0];
    s = (temp1-temp2)/2;
    cout << setprecision(1) << fixed << abs(s);
}