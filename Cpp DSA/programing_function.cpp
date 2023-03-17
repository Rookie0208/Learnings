#include<bits/stdc++.h>
using namespace std;
#include "sum_3.cpp"

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i] ;
    solve(v);      // -2 -2 -1 -1 -1 0 0 0 2 2 2
    // for(int i : v) cout << i << " ";
}