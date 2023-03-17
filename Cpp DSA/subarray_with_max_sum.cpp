#include<bits/stdc++.h>
using namespace std;

// KADANE'S ALGORITHM : TC -> O(n) SC -> O(1)
// INTUITION : iterate over the array and add the elements in the sum
// find max(maxi, sum);
// if(sum < 0) set sum = 0; because adding -ve elements will eventually decrease the sum
// and we have to maximise the total sum.
int find_sum(vector<int> &a) {
    int sum = 0;
    int maxi = a[0];
    int i = 0, j=0;
    while(i < a.size()) {
        sum += a[i];
        maxi = max(maxi,sum);
        if(sum < 0) {
            sum = 0;
        }
        i++;
    }
    return maxi;
}

int main() {
    int n;
    cin >> n ;
    vector<int> v(n), empty(n);
    for(int i= 0; i<n; i++) {
        cin >> v[i];
    }
    cout << find_sum(v);
}