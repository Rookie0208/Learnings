#include<bits/stdc++.h>
using namespace std;

// QUESTION : teen elements input leke, third no. ke index wala element print karna hai.
/*
Example : a,b,c = 3,5,14 : ek set hoga jisme 3 or 5 or (3 & 5) ke multiple honge. ab set mai se
14th number ka element print karna hai.
*/

/*
int main() {
	int a,b,c;
	cin >> a >> b >> c;

// printing the cth number;
	int count = 0;
	int in = 1;
	int n;
	while(count < c ) {
		if(in % a == 0 || in % b == 0) count++;
		if(count == c) n = in;
	in++;
	}
	// cout << n << endl;

// code for lcm
int lcm;
for(int i = 1; i<= a*b ; i++) {
	if(i % a == 0 && i % b == 0) {
		lcm = i;
		break;
	} 
}

int step;
if(n % a == 0 && n % b ==0 ) {
	step = lcm;
}
else if( n % a == 0) {
	step = a;
}
else {
	step = b;
}

for(int i = n ; i>= 0; i = i - step) {
	cout << i << " ";
}
}
*/

/*
// PASCALS TRIANGLE
const int N = 42;

int main() {
	long long int a[N][N];

	a[0][0] = 1;
	for(int i = 1; i< N; i++) {
		a[i][0] = 1;
		a[i][i] = 1;

		for(int j = 1; j<i; j++) {
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	int t;
	cin >> t; 
	while(t--) {
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
}
*/

char upper(char c) {
	return (c-32);
}
char lower(char c) {
	return (c+32);
}

int main() {
	string s;
	cin >> s;

	for(int i = 0; i< s.size(); i++) {
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = upper(s[i]);
		else if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = lower(s[i]);
	} 
	int result = 0;
	for(int i = 0; i< s.size(); i++) {
		if(s[i] >= 'a' && s[i] <= 'z')
			result = result - s[i];
		else if(s[i] >= 'A' && s[i] <= 'Z')
			result = result + s[i];
	}
	int isPrime = 1;
	for(int i = 2; i<= result; i++) {
		if(result % i == 0) {
			isPrime = 0;
			break;
		}
	} 
	if(isPrime == 1) {
		cout << 1;
	} else cout << 0;
}