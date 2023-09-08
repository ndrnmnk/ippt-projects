#include <iostream>
#include <vector>

using namespace std;

typedef vector < vector<int> > Matrix;


vector <int> wayx;
vector <int> wayy;

void ReadMatrix(Matrix &A) {
    int n, m;
    cin >> n >> m;
    A.resize(n);
    for (int i = 0; i < n; i++) A[i].resize(m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

}

Matrix FillMatrix(Matrix A) {
    int n = A.size();
    int m = A[0].size();
    Matrix B;
    B.resize(n);
    for (int i = 0; i < n; i++) B[i].resize(m);
    B[0][0] = A[0][0];
    for (int j = 1; j < m; j++) B[0][j] = B[0][j-1] + A[0][j];
    for (int i = 1; i < n; i++) B[i][0] = B[i-1][0] + A[i][0];
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            B[i][j] = A[i][j] + min(B[i-1][j], B[i][j-1]);
    return B;
}

void GetWay(Matrix A) {

    int n = A.size();
    int m = A[0].size();
    int i=n-1; int j=m-1;
    wayx.push_back(n-1);
    wayy.push_back(m-1);
    while ((i > 0) || (j > 0)) {
        if ((i != 0) && (j == 0)) { i--;  wayx.push_back(i); wayy.push_back(j); } else
        if ((i == 0) && (j != 0)) { j--; wayx.push_back(i); wayy.push_back(j); } else
        if (A[i-1][j] < A[i][j-1]) { i--;  wayx.push_back(i); wayy.push_back(j); }
        else { j--; wayx.push_back(i); wayy.push_back(j); }
    }
}

void PrintMatrix(Matrix A) {
    int n = A.size();
    int m = A[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << A[i][j] << ' ';
    cout << '\n';
    }
}

void PrintWay(vector<int> wayx, vector<int> wayy) {
    while (1 - wayx.empty()) {
        cout << wayx.back()+1 << ' ' << wayy.back()+1 << '\n';
        wayx.pop_back(); wayy.pop_back();
    }
}

int main(){
    Matrix A, B;
    ReadMatrix(A);
    B = FillMatrix(A);
    //PrintMatrix(B);
    int n = B.size();
    int m = B[0].size();
    cout << B[n-1][m-1] << '\n' << n + m - 1 << '\n';
    GetWay(B);
    PrintWay(wayx, wayy);

}
