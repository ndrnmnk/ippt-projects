#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int arr[3];
    int maxn, minn, i;
    minn = 10001;
    cin >> arr[0] >> arr[1] >> arr[2];
    for(i=0; i<3; i++) {
        if (maxn < arr[i]) maxn = arr[i];
        if (minn > arr[i]) minn = arr[i];
    }
    cout << maxn * maxn << "\n";
    cout << minn * minn << "\n";

}
