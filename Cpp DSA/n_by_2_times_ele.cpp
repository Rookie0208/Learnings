#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &a) {
    // MOORE'S VOTING ALGORITHM : TC -> O(n) SC -> O(1)
    // INTUITION : whenever the count becomes zero that means, the majority element
    // gets cancel out by the non-majority elements
    // 7 7 5 7 5 1 | 5 7 | 5 5 7 7 | 5 5 5 5
    int count = 0;
    int element = 0;
    for(auto &i : a) {
        if(count == 0) element = i;
        if(element == i) count++;
        else count--;
    }
    return element;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int,int> um;
    // 2,2,1,1,1,2,2
    for(int i= 0; i<n; i++) {
        cin >> v[i];
        um[v[i]]++;
    }
    int maxx = 0;
    for(auto i : um) {
        if(i.second > n/2) {
            maxx = i.first;
            break;
        }
        // TC -> O(n) 
        // SC -> O(n)
    }
    cout << maxx << endl;

    cout << solve(v);
}