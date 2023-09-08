#include <iostream>
using namespace std;

int main()
{
    int i;
    string name1;
    string name2;
    string goal1;
    string goal2;
    cin >> name1 >> goal1 >> name2 >> goal2;
    for (i=0; i<(12-size(name1)); i++) 
        cout << " ";
    cout << name1 << " : " << name2 << "\n";
    for (i=0; i<(12-size(goal1)); i++) 
        cout << " ";
    cout << goal1 << " : " << goal2;
}
