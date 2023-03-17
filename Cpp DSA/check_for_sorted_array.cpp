#include<bits/stdc++.h>
using namespace std;

#define cc(a)			cout<<(a)<<" ";
#define ll 				long long int
#define mod				1e7
#define INF				1e18
#define endl			"\n"
#define pb				push_back()
#define eb				emplace_back()
#define vi				vector<ll>
#define vs				vector<string>
#define pii				pair<ll,ll>
// #define mp 			map
#define ff 				first
#define ss 				second
#define mid(l,r)		((l)+(r))>>1;
#define fl(i,a,b)		for(int i = (a); i<(b); i++)
#define rfl(i,a,b)		for(int i = (a); i>=(b); i--)
#define forIt(it,a,b)	for(auto it = (a); it != (b); it++)
#define parray(arr,a,b)	for(int i = (a); i<=(b); i++) cout<<(arr[i])<<" ";

void solve(int a[], int n) {
	bool isSorted = true;
	fl(i,1,n) {
		if(a[i] < a[i-1]) {
			isSorted = false;
			break;
		}
	}
	isSorted ? cout << "true" : cout << "false";
	cout << endl;
}

void resolve(int a[], int n) {
	// 4 5 1 2 3
	int count = 0;
	bool isSorted = true;
	for(int i= 0; i<n; i++) {
		if(a[i] > a[(i+1)%n]) count++;
		if(count == 2) {
			isSorted = false;
			break;
		}
	}
	isSorted ? cout << "true" : cout << "false";
}

int main(){
	int n;
	cin >> n;
	int a[n];
	fl(i,0,n) cin >> a[i];

	// solve(a,n);
	resolve(a,n);
}