#include<bits/stdc++.h>
using namespace std;

void findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        vector<int> ans;
        int top = 0, right = 0, bottom = n-1, left = n-1;
        int i = 0;
        while(top < m-1) {
            ans.push_back(a[i][top]);
            top++;
        }
        while(right < bottom) {
            ans.push_back(a[right][top]);
            right++;
        }
        while(bottom >= 0) {
            ans.push_back(a[right][bottom]);
            bottom--;
        }
        while(left >= 0) {
         ans.push_back(a[left][bottom]);
         left--;
        }
        
        for(auto it : ans) {
            cout << it << " ";
        }
    }

int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<int>> v;
    for(int i = 0; i<m; i++) {
        vector<int> v1;
        for(int j = 0; j<n; j++) {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        v.push_back(v1);
    }
    findK(v,n,m,0);

}