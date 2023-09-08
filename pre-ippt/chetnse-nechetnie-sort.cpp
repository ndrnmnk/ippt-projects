#include <iostream>
#include <cmath>
using namespace std;

bool compare (int num1, int num2)
{
    if ((num1 % 2 == 0) && (num2 % 2 != 0)) return 1;
    if ((num2 % 2 == 0) && (num1 % 2 != 0)) return 0;
    if (num1 > num2) return 0; else return 1;
}

void InsertSort (int* a, int n)
{ 
    int tmp;
    for (int i = 1, j; i < n; ++i) 
    {
        tmp=a[i]; 
        for (j = i - 1; j >= 0 && compare(tmp, a[j]); --j) 
            a[j+1]=a[j];    
            a[j+1]=tmp; 
    }
}  
 
int main()
{
    int n;
    cin >> n;
    
    int* a = new int[n];
    
    for (int i = 0; i < n; i++)        
        cin >> a[i];   
    
    InsertSort(a, n);
    
    for (int i = 0; i < n; i++)        
        cout << a[i] << " ";  
        
return 0;
}
