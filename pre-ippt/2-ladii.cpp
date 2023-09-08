#include <iostream>

using namespace std;


int main()
{
    long long int n, x, y, x1, y1, x2, y2, outp;
    cin >> n;
    int arr[n+1][n+1];
    for (x = 1; x < n+1; x++)
        for (y = 1; y < n+1; y++) arr[x][y] = 0;
    cin >> x1 >> y1;
    arr[x1][y1] = 2;
    cin >> x2 >> y2;
    arr[x2][y2] = 2;    
    for (x = 1; x < n+1; x++) {
        for (y = 1; y < n+1; y++) {
            if ((x == x1) || (x == x2))
                for (int i = 1; i < n+1; i++) if (arr[x][i] != 2) arr[x][i] = 1;
            if ((y == y1) || (y == y2))
                for (int i = 1; i < n+1; i++) if (arr[i][y] != 2) arr[i][y] = 1;
        }
    }
    outp = 0;
    for (x = 1; x < n+1; x++)
        for (y = 1; y < n+1; y++) if (arr[x][y] == 1) outp++;
    cout << outp;
}