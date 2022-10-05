#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,n;
	cin >> a >> b;
	int lcm, hcf;
	for(int i = 1; i <= a*b; i++) {
		if(i % a == 0 && i % b == 0) {
			lcm = i;
			break;
		}
	}
	cout << lcm << endl;
	if(a > b) n = a;
	else n = b;
	for(int i = 1; i <= n; i++) {
		if(a%i == 0 && b%i == 0) {
			hcf = i;
		}
	}
	cout << hcf;
}