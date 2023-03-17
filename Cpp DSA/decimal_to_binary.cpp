#include<bits/stdc++.h>
using namespace std;

string deci_to_bin(int n) {
    int num = n;
    string s, rev;
    while(num > 0) {
        int rem = num%2;
        string r = to_string(rem);
        s.append(r);
        num /= 2;
    }
    for(int i = s.size()-1; i>= 0; i--) {
        rev.push_back(s[i]);
    }
    // for(int i = s.size()-1; i>= 0; i--) cout << s[i];
    return rev;
}

int main() {
    int n;
    cin >> n;

    cout << deci_to_bin(n);
}