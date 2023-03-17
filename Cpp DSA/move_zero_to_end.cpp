#include<bits/stdc++.h>
using namespace std;

void moveZero(vector<int> &v, int n) {
    int zero = 0,j = 0;
    vector<int> a(n);
    for(int i = 0; i<n; i++) {
        if(v[i] == 0) zero++;
        else {
            a[j] = v[i];
            j++;
            }
    }
    for(int i = 0; i<zero; i++) {
        a.push_back(0);
    }
    // cout << zero<<endl;
    for(int i = 0; i<n; i++) cout << a[i] << " ";

    // TC : O(n)+O(k) // where n = size of array and k = count of zero.
    // space complexity : O(n) // for temprory array.
}

void solve(vector<int> &v, int n) {
    int first_zero = 0;
    // find the occurence of first zero.
    while(first_zero < n) {
    if(v[first_zero] == 0) break;
    else first_zero = first_zero+1;
    }
    int j = first_zero, i = first_zero+1;
    while(i < n) {
        if(v[i] != 0) {
            swap(v[i], v[j]);
            j++;
        }
        i++;
    }
    for(int i = 0; i<n; i++) cout << v[i] << " ";
    // TC : O(n)
    // SC : O(1);   // no temprory array.
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i= 0; i<n; i++) {
        cin >> v[i];
    }
    // moveZero(v,n);
    solve(v,n) ;
}