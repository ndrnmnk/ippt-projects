#include <iostream>
using namespace std;

bool visokosniy(int n){
    if (((n % 100 != 0) && (n % 4 == 0)) || (n % 400 == 0)) return 1; else return 0;
}


bool correct(int DD, int MM, bool visokosniy){
    bool correct = true;
    if (DD <1 || MM < 1 || MM > 12)
     correct = false;
   else if((visokosniy==0) && (MM==2 && DD > 28))
     correct = false;
   else if((visokosniy==1) && (MM==2 && DD > 29))
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
    cin >> DD >> MM >> YY;
    if ((correct(DD, MM, visokosniy(YY))) && (YY < 2100) && (YY > 1999))
        cout <<  "YES\n";
        else cout << "NO\n";
}
}
