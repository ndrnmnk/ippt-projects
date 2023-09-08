#include <iostream>
#include <stack>

using namespace std;

int main()
{
    long long int n, a, b, c, x, xold, i;
    long long int outp = 0;
    cin >> n >> a >> b >> c >> x;
    stack<long long int> s;
    stack<long long int> min_st;
    for (i = 1; i <= n; i++) {
        xold = x;
        x = (a * xold * xold + b * xold + c) / 100 % 1000000;
        if ( (x % 5) < 2) {
            if (!s.empty()) {
                s.pop();
                min_st.pop();
            }
        }
        else {
            s.push(x);
            if ((min_st.empty()) || (x < min_st.top())) min_st.push(x);
            else min_st.push(min_st.top());
        }
        
//        if (!min_st.empty()) cout << "min = " << min_st.top() << endl; else cout << "min_st is empty" << endl;
        
        if (!s.empty()) outp += min_st.top();
    }
    
    cout << outp;
}