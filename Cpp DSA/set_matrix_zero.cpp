#include<bits/stdc++.h>
using namespace std;

void set_zero(int i, int j, vector<vector<int>> &v) {
    int k = 0;
    while(k < v[0].size()) {
        if(v[i][k] != 0)
            v[i][k] = -1;
        k++;
    }
    k = 0;
    while(k < v.size()) {
        if(v[k][j] != 0)
            v[k][j] = -1;
        k++;
    }
}

vector<vector<int>> solve(vector<vector<int>> &v) {
    // int i_ind = 0;
    // int j_ind = 0;
    int i= 0, j= 0;
    for( i= 0; i<v.size(); i++) {
        for( j = 0; j < v[0].size(); j++) {
            if(v[i][j] == 0) {
                set_zero(i,j,v);
                // cout << i << " "<< j << endl;
            }
        }
    }
    for(int i = 0; i<v.size(); i++) {
        for(int j = 0; j<v[0].size(); j++) {
            if(v[i][j] == -1) v[i][j] = 0;
        }
    }
    return v;
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

    solve(v);
    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}