#include<bits/stdc++.h>
using namespace std;
void find_union(vector<int> &a, vector<int> &b) {
    int j = 0;
    set<int>s;
    for(int i : a) {
        int ele = find(b.begin(), b.end(), i) - b.begin();
        if(ele == b.size()) b.push_back(i);
    }
    for(auto it : b) s.insert(it);
    for(auto it : s) cout << it << " ";
    
    // TC : O(n * log(n))
    // SC : O(n) // for set array
}

void solve_union(vector<int> &a, vector<int> &b) {
    set<int> s;
    vector<int> Union;
    for(int i : a) s.insert(i);
    for(int i : b) s.insert(i);

    for(auto i : s) Union.push_back(i);
    for(auto i : Union) cout << i << " ";

    // TC : O(m+n) log(m+n) inserting in set takes logN time
    // (m+n) because a set can store m+n elements at max.
    // SC : O(m+n) // space of union vector.

}

void union_using_pointer(vector<int> &a, vector<int> &b) {
    int i = 0, j =0;
    vector<int> Union;
    while(i < a.size() && j < b.size()) {
        if(a[i] <= b[j]) {
            if(Union.size() == 0 || Union.back() != a[i])
            Union.push_back(a[i]);
        i++;
        }
        else {
            if(Union.size() == 0 || Union.back() != b[j])
            Union.push_back(b[j]);
        j++;
        }
    }
    while(i < a.size()) {
        if(Union.back() != a[i]) Union.push_back(a[i]);
        i++;
    }
    while(i < b.size()) {
        if(Union.back() != b[j]) Union.push_back(b[j]);
        j++;
    }
    for(auto it : Union) cout << it << " ";
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<m; i++) cin >> b[i];

    // find_union(a,b);     // my approach
    // solve_union(a,b);       // using sets
    union_using_pointer(a,b);    // using 2 pointers
}