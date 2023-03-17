#include<bits/stdc++.h>
using namespace std;

int find_duplicate(vector<int> &a) {
    int f=a[0], s=a[0];
    do {
        s = a[s];
        f = a[a[f]];
    } while(s != f);
    
    f = a[0];
    while(s != f) {
        s = a[s];
        f = a[f];
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    cout << find_duplicate(v);

}