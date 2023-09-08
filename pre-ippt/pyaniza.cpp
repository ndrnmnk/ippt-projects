#include <iostream>
#include <deque>

using namespace std;

deque <int> Artur;
deque <int> Igor;

bool artur_win(int a, int i) {
if ((i == 9) && (a == 0)) return 1; else
if ((i == 0) && (a == 9)) return 0; else
if (a < i) return 0; else return 1;
}

int main()
{
    int i, n;
    bool flag = 0;

    for (i = 0; i < 5; i++) {
        cin >> n;
        Artur.push_back(n);
    }

    for (i = 0; i < 5; i++) {
        cin >> n;
        Igor.push_back(n);
    }

    for (i = 1; i < 1000001; i++) {
        
        if (artur_win(Artur.front(), Igor.front())) {
                Artur.push_back(Artur.front());
                Artur.pop_front();
                Artur.push_back(Igor.front());
                Igor.pop_front();
        } else {
                Igor.push_back(Artur.front());
                Artur.pop_front();
                Igor.push_back(Igor.front());
                Igor.pop_front();
        }

        if (Artur.empty()) { cout << "Igor " << i; flag = 1; break; }
        if (Igor.empty()) { cout << "Artur " << i; flag = 1; break; }
    
    }

    if (flag == 0) cout << "Botva";
}