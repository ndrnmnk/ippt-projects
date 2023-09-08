#include <iostream>
using namespace std;

void InsertSort (int* a, int n)
{ 
    int tmp;
    for (int i = 1, j; i < n; ++i) 
    {
        tmp=a[i]; 
        for (j = i - 1; j >= 0 && a[j] > tmp; --j) 
            a[j+1]=a[j];    
            a[j+1]=tmp; 
    }
}  
 
int main()
{
    int n;
    int outp = 0;
    cin >> n;
    
    int* a = new int[n];
    
    for (int i = 0; i < n; i++)        
        cin >> a[i];   
    
    InsertSort(a,n); 
    
    for (int i = 0; i < n; i++) if (a[i] != a[i+1]) outp++;
    
    cout << outp;
    
return 0;
}
