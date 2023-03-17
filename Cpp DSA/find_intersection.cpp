#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int> &a, vector<int> &b) {
    set<int> s;
    for(int i : a) {
        int f = find(b.begin(), b.end(), i)-b.begin();
        if(f != b.size()) s.insert(i);
    }
    for(auto i : s) cout << i << " ";

    // TC : O(n) * log(n)
    // SC : O(1)
}

void intersection_two_pointer(vector<int> &a, vector<int> &b) {
    vector<int> ans ;
    int i = 0, j = 0;
    while(i < a.size() && j < b.size()) {
        if(a[i] < b[j]) i++;
        else if(b[j] < a[i]) j++;
        else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(auto it : ans) cout << it << " ";

    // TC : O(n)
    // SC : O(1)
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i= 0; i<n; i++) cin >> a[i];
    for(int i= 0; i<m; i++) cin >> b[i];

    // intersection(a,b);
    intersection_two_pointer(a,b);
}