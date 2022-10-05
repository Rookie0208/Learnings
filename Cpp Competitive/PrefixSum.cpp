/*
Given array a of N integers. Given Q querries and in each querry
given L and R. Print sum of array elements from index L to R
L, R included.

Constraints :
1 <= N <= 1e5
1 <= a[i] <= 1e9
1 <= Q <= 1e5
1 <= L, R <= N

Prefix sum jese questions mai 0 ki jagah 1 base indexing zyada prefer ki jaati hai.
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N];

/*
int main() {
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> a[i];
        // TC : O(n)
    }

int q;
cin>> q;
while(q--) {
    int l,r;
    cin >> l >> r;

    long long sum = 0;  // kyunki a[i] <= 1e9 tak hai.
    for(int i = l; i<=r; i++) {
        sum += a[i];
        // TC : O(n) * O(q) = O(n * q)
        // O(10^5 * 10^5) = O(10^10) which will not compute in 1sec.
    }
    cout << sum << endl;
}
}
*/

// Optimized solution : 
/*
int pf[N] ; // prefix sum ka bhi array bna liya.
int main() {
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> a[i];
        // TC : O(n)
        pf[i] = pf[i-1] + a[i];
    }

int q;
cin >> q;
while(q--) {
    int l,r;
    cin >> l >> r;
    cout << pf[r] - pf[l-1] << endl;
    // isse distance ki tarah samjh.
    // TC : O(q) * O(1) => O(q) => 10^5
}
}
*/
/*
kra kya hai code mai :
ek prefix sum(pf) naam ka array banaya hai.
a[N]  = {1,2,3,4,5}
pf[N] = {1,3,6,10,15} 
mtlb pf[1] = a[1] => a[1]
     pf[2] = a[1] + a[2] => pf[1] + a[2]
     pf[3] = a[1] + a[2] + a[3] => pf[2] + a[3]
     pf[4] = a[1] + a[2] + a[3] + a[4] => pf[3] + a[4]
     pf[i] => pf[i-1] + a[i];
*/

// for 2D array
int arr[N][N];

/*
int main() {
    int n ;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
        cin >> arr[i][j];
    }
    }

    int q;
    cin >> q;
    while(q--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        long long sum = 0;
        for(int i = a; i<= c; i++) {
            for(int j = b; j<=d; j++) {
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
    }
}
*/

// Otpimize solution :
long long pf[N][N];
int main() {
    int n ;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
        cin >> arr[i][j];
        pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1]; 
    }
    }

    int q;
    cin >> q;
    while(q--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<< endl;
    }
}
// TC : O(n*n) => O(10^6);
 