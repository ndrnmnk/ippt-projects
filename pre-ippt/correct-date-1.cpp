#include <iostream>
using namespace std;


bool correct(int DD, int MM){
    bool correct = true;
    if (DD < 1 || MM < 1 || MM > 12)
     correct = false;
   else if (MM==2 && DD > 28)
     correct = false;
   else if ((MM ==1 || MM==3 || MM==5 || MM == 7 || MM==8 || MM==10 || MM==12) && DD > 31)
     correct = false;
   else if ((MM==4 || MM==6 || MM==9 || MM==11) && DD > 30)
     correct = false;
    if (correct)
     return true;
   else return false;
}



int main()
{
    int DD, MM, YY, i;
   for (int i=0;i<5;i++) {
    cin >> DD >> MM;
    if (correct(DD, MM))
        cout <<  "YES\n";
        else cout << "NO\n";
}
}
