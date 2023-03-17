// Problem Statement: Given an array of integers nums[] and an integer target, return indices of the two numbers such that their sum is equal to the target.

#include<bits/stdc++.h>
using namespace std;


void find_sum(vector<int> &v, int sum) {
    int i = 0, j= 0;
    int maxi = 0, count=0, s = 0;
    list<int> ans;
    while(i <= v.size() && j < v.size()) {
        if(s == sum && ans.size() == 2) {
            break;
        }
        s += v[i];
        ans.push_back(i);
        if(s > sum) {
            s -= v[j];
            ans.pop_front();
            j++;
        }
        i++;
    }
    for(auto it : ans) cout << it << " ";
    // TC : O(n)*O(1)
    // SC : O(n);
}

/*
void find_sum(vector<int> &v, int sum) {
    int i = 0;
    int j = 1;
    vector<int> ans;
    while(i < v.size()-1) {
        if(v[i] + v[j] == sum) {
            ans.emplace_back(i);
            ans.emplace_back(j);
            break;
        }
        if(v[i] + v[j] > sum) j++;
        else i++;
        if(ans.size() == 2 ) break;
    }
    for(auto it : ans) cout << it << " ";
    // return ans;
}
*/

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    // sort(v.begin(), v.end());
    // for(auto it : v) cout << it << " ";

    find_sum(v,k);
}