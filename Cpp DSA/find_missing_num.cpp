#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count[50] = {0};
    vector<int> v(n), ans;
    int maxi = INT_MIN;
    for(int i= 0; i<n; i++) {
        cin >> v[i];
        count[v[i]]++;
        maxi = max(maxi, v[i]);
    }
    for(int i = 1; i<maxi; i++) {
        if(count[i] > 1 || count[i] == 0) ans.push_back(i);
    }
    for(int i = 0; i<ans.size(); i++) cout << ans[i] << " ";
    // TC = SC = O(n);
}