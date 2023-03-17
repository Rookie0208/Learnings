#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n) {
    int b[n];
    for(int i = 0; i<n; i++) {
        b[i%(n)] = a[(i+1)%n];
    }
    for(int i = 0; i<n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];
    solve(a,n);
}