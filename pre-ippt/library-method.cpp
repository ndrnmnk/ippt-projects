#include <iostream>
using namespace std;

void Print (int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void InsertSort (int* a, int n)
{
    int tmp;
    for (int i = 1, j; i < n; ++i)
    {
        tmp=a[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j)
            a[j+1]=a[j];
            a[j+1]=tmp;
        Print(a,n);
    }
}

int main()
{
    int n;
    int z;
    bool flag;
    cin >> n;
    flag=false;
    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]<z) flag=true;
        z=a[i];
    }

    if (flag==false) cout << "The array is already sorted";
    if (flag==true) InsertSort(a,n);

return 0;
}
