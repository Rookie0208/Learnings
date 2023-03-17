#include<bits/stdc++.h>
using namespace std;

int find_sum(vector<int> &v, int sum) {
    // 2 3 5 1 9 and 7 1 6 0
    int i = 0, j = 0;
    int s = 0;
    int maxi = 0;
    int count = 0;
    while(i < v.size() && j < v.size()) {
        s += v[i];
        count += 1;
        if(s == sum) {
            maxi = max(maxi, count);
        }
        if(s > sum) {
            count -= 1;
            s -= v[i];
            j++;
        }
        i++;
    }
    // cout << count << endl;
    return maxi;
    // TC : O(n)
    // SC : O(1)
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n), empty(n);
    for(int i= 0; i<n; i++) {
        cin >> v[i];
    }
    cout << find_sum(v,k);
}