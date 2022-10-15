#include<bits/stdc++.h>
using namespace std;


int lcs(int i, int j, string a, string b) {
	if(i == a.length() || j == b.length()) {
		return 0;
	} else if(a[i] == b[j]) {
		return (1 + lcs(i+1, j+1, a, b));
	} else {
		return max(lcs(i+1,j, a, b), lcs(i,j+1, a, b));
	}
}


int main() {
	string a, b;
	cin >> a >> b;

	// cout << a << " " << b << endl;

	int n1 = a.length();
	int n2 = b.length();

	// cout << n1 << " " << n2 << endl;


	int i, j;
	i = j = 0;

	int result = lcs(i, j,a,b);
	cout << result << endl;

}