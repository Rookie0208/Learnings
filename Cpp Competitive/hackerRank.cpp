#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    // Complete the code.
    int a;
    long long int b;
    char c;
    float f;
    double d;
    cin >> a >> b >> c >> f >> d;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << setprecision(9) << f << endl;
    cout << setprecision(16) << d ;
    return 0;
}
*/

/*
int main() {
    int n;
    cin >> n;

    if(n >= 0 && n <= 9) {
        if(n == 1) cout << "one";
        if(n == 2) cout << "two";
        if(n == 3) cout << "three";
        if(n == 4) cout << "four";
        if(n == 5) cout << "five";
        if(n == 6) cout << "six";
        if(n == 7) cout << "seven";
        if(n == 8) cout << "eight";
        if(n == 9) cout << "nine";
    } else {
        cout << "greater than 9";
    }
}
*/


int main() {
    
    int n, q;
    cin >> n >> q;

    vector<vector<int>> v;
    for(int i = 0; i<n; i++) {
        int s1;
        cin >> s1;
        vector<int> temp;
            for (int j = 0; j < s1; j++) {
            int x ;
            cin >> x;
            temp.push_back(x);
            }
            v.push_back(temp);
    }
        
    while(q--) {
        int a,b;
        cin >> a;
        cin >> b;

        auto it = find(v[a].begin(), v[a].end(), v[a][b]);
        if(it != v[a].end()) cout << *it << " ";

        
    }  
    return 0;
}