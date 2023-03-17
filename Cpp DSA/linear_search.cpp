#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &v, int k) {
    int i = 0;
    for(i = 0; i<v.size(); i++) {
        if(v[i] == k) break;
    }
    cout << i << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    solve(v, k);
}