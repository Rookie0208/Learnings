#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &v) {
    // 3 1 -2 -5 2 -4
    int i = 1;
    int j = 0;
    while(i < v.size()) {
        if(v[i] > 0 && v[i-1] > 0) {
            i++;
            j++;
            swap(v[i], v[j]);
        }
        i++;
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) {
        cin >> v[i] ;
    }
    solve(v);
    for(auto it : v) cout << it << " ";
}