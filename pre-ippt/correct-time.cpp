#include <iostream>
using namespace std;


bool correct(int SS, int MM, int HH){
    bool correct = true;
    if ((SS < 0) || (SS > 59)) correct = false; else
    if ((MM < 0) || (MM > 59)) correct = false; else
    if ((HH < 0) || (HH > 23)) correct = false;
    if (correct) return true; else return false;
}



int main()
{
    int SS, MM, HH, i;
   for (int i=0;i<5;i++) {
    cin >> HH >> MM >> SS;
    if (correct(SS, MM, HH))
        cout <<  "YES\n";
        else cout << "NO\n";
}
}
