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
#define fl(i,a,b)		for(int i = (a); i<=(b); i++)
#define rfl(i,a,b)		for(int i = (a); i>=(b); i--)
#define forIt(it,a,b)	for(auto it = (a); it != (b); it++)
#define parray(arr,a,b)	for(int i = (a); i<=(b); i++) cout<<(arr[i])<<" ";

void solve(int a[], int n) {
	int maxi = 0, second_maxi = 0;
	int mini = 1e9, second_mini = 1e9;
	fl(i,0,n-1) {
		maxi = max(maxi, a[i]);
		mini = min(mini, a[i]);
	}
	fl(i,0,n-1) {
		if(a[i] > second_maxi && a[i] != maxi) second_maxi = a[i];
		if(a[i] < second_mini && a[i] != mini) second_mini = a[i];
	}
	cout << second_maxi << endl;
	cout << second_mini << endl;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	fl(i,0,n-1) cin >> a[i];

	solve(a,n);
}