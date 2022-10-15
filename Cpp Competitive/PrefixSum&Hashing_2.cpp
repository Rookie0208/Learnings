/*
Given a string s of lower case english alphabet of length N and two intergers
L and R he wants to know whether all the letters of the substring from index L
to R (L and R included) can be rearranged to form a palindrome or not.
He wants to know this for Q values of L and R.

Constraints :
1 <= t <= 10
1 <= N,Q <= 100000
1 <= l <= R <= N
'a' <= s[i] <= 'z' for 1 <= i <= N

agar palindrome banega toh 'yes' print karna hai nhi toh 'no'.

*/

#include<bits/stdc++.h>
using namespace std;
// const int N = 26;
// int hsh[N];
int main() {
	int q;
	cin >> q;
	
	while(q--) {
		int n, t;
		cin >> n >> t;
		string s;
		cin >> s;
		while(t--) {
			int l,r;
			cin >> l >> r;
			int hsh[26];
			for(int i = 1; i<= 26; i++) {
				hsh[i] = 0;
			}
			l--, r--;
			for(int i = l; i <= r; i++) {
				hsh[s[i] - 'a']++;
			}
			int oddcnt = 0;
			for(int i = 0; i<26; i++) {
				if(hsh[i] % 2 == 0) oddcnt++;
			}
			if(oddcnt > 1) cout << "NO";
			else cout << "YES";
		}
	}
}