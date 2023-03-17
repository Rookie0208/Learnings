#include<bits/stdc++.h>
using namespace std;
const long long int N = 10000000;
long long a[N];
long long b[N];
long long c[N];

int main(){
    long long t;
    cin >> t;
    for(int i= 3; i<N; i += 3) {
        a[i] = a[i] + 3 + a[i-3];
        c[i] = a[i];
    }
    for(int i= 5; i<N; i += 5) {
        b[i] = b[i] + 5 + b[i-5];
        c[i] = b[i];
    }
    
    while(t--) {
    long long sum = 0;
        long long x;
        cin >> x;
        
        long long i = 1;
        while(i < x) {
            if(c[i] >= x) break;
            else {
                sum += c[i];
            }
            i++;
        }
        cout << sum << endl;
    }
}
