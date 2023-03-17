#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void check(vector<vector<int>> &v, vector<int> &result, int start, int k, int n, int sum) {
        if(sum == n && k == 0) {
            v.push_back(result);
            return; 
        }

        if(sum > n) {
          return;
      }

        for(int i = start; i <= 9; i++) {
            if(i > n) break;
            result.push_back(i);
            check(v, result, i+1, k-1, n, sum+i);
            result.pop_back();
        }
       
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> v;
        vector<int> result;
        check(v, result, 1, k, n, 0);
        return v;
     //    for(int i = 0; i<v.size(); i++) {
     //    for(int j = 0; j < v[i].size(); j++) {
     //        cout << v[i][j] << " ";
     //    }
     //    cout << endl;
     // }
    }
};
int main() {
    int k, n;
    cin >> k >> n;
    combinationSum3(k,n);
    
}