#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &v) {
    vector<vector<int>> a;
    int row = v.size();
    int col = v[0].size();

// copy elements in a new matrix [a]
    for(int i= 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            a[i][j] = v[i][j];
        }
    }

// logic
    for(int i= 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            int k = col-1;
            while(k > 0) { 
                v[i][j] = a[k][i];
                k--;
            }
        }
    }
    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void resolve(vector<vector<int>> &v) {
    int row = v.size();
    int col = v[0].size();
    // transpose the matrix
    for(int i = 0; i<row; i++) {
        for(int j = i; j<col; j++){
            if(j < i) continue;
            swap(v[i][j], v[j][i]);
        }
    }

    // logic : kaam nhi kar rha
    // for(int i = 0; i<col; i++) {
    //     for(int j = 0; j<row; j++)
    //         swap(v[j][i], v[j][row-i-1]);
    // }
    for(int i = 0; i<row; i++) {
        reverse(v[i].begin(), v[i].end());
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

    // solve(v);   // not working
    resolve(v);
    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}