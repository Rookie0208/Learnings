/*

CONSTRINTS :
3 <= n <= 10^7
1 <= m <= 2 * 1e5
1 <= a <= b <= n
0 <= k <= 1e9

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
// long long int kyunki m querry ke liye n elements mai K values add hongi.
long long int a[N];		

/*
int main() {
	int n,q;
	cin >> n >> q;


	while(q--) {
		int c, b, k;
		cin >> c >> b >> k;

		for(int i = c; i<=b; i++) {
			a[i] = a[i] + k;
		}

	}

		long long max = -1;
		for(int i = 1; i<= n; i++) {
			if(max < a[i]) {
				max = a[i];
			}
		}
		cout << max << endl;
}
// TC : O(m * n + n) = 2 * 1e5 * 1e7 = 10^12
*/


int main() {
	int n,q;
	cin >> n >> q;

	while(q--) {
		int c, b, k;
		cin >> c >> b >> k;
		a[c] += k;
		a[b+1] -= k;
}
for(int i = 1; i<=n; i++) {
	a[i] += a[i-1];
}
long long max = -1;
		for(int i = 1; i<= n; i++) {
			if(max < a[i]) {
				max = a[i];
			}
		}
		cout << max << endl;
		}

		// new TC : 1e7;