#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int n, y, sum = 0;
cin >> n;

y = 0;
int i, c[n], j, pos, tmp;

for(i = 0; i < n; i++) cin >> c[i];

for(i = 0; i < n; i++)
{
    pos = i;
    tmp = c[i];
    for(j = i+1; j < n; j++)
    {
        if(c[j] < tmp)
        {
            pos = j;
            tmp = c[j];
        }
    }
    if((i == 0) && (pos == i))
    {
        cout << 0;
        return 0;
    }
    if((i != pos) && (i == y))
    {
        sum++;
        y = pos;
    }
    swap(c[i], c[pos]);
}

cout << sum;
return 0;
}
