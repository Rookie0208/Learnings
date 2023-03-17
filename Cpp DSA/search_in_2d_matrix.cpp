#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for(int i= 0; i<n; i++) {
        for(int j = 0; j<m; j++)
            cin >> a[i][j];
    }

    // with for loop TC: O(n*m)
    // bool check = false;
    // for(int i= 0; i<n; i++) {
    //     for(int j = 0; j<m; j++){
    //         if(a[i][j] == k) {
    //             // cout << "true";
    //             check = true;
    //             break;
    //         }
    //     }
    // }
    // check ? cout << "true" : cout << "false";

// OPTIMISED THAN ABOVE CODE :
    // int i=0, j=m-1;
    // while(i < n && j >= 0) {
    //     if(a[i][j] == k) {
    //         cout << "the element found at index "<< i <<", "<< j;
    //         return 1;
    //     }
    //     if(a[i][j] > k) {
    //     j--;
    //     } else i++;
    // }

// MORE OPTIMISED THAN THE ABOVE CODE BY BINARY SEARCH :
// TC : log(n*m)
// SC : O(1)
    // index / (column size) = row index
    // index % (column size) = column index
    int low = 0;
    int high = n*m - 1;
    int mid;
    while(low <= high) {
        mid = (low+(high - low)/2);
        if(a[mid/m][mid%m] == k) {
            cout << "the element found at index "<< mid/m <<", "<< mid%m;
            return 1;
        }
        if(a[mid/m][mid%m] < k) low = mid+1;
        else high = mid-1;
    }
    return 0;
}