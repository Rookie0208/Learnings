#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ;
    cin >> n;
    
    vector<int>v ;
    for(int i = 1; i <= n; i++) {
        int x ;
        cin >> x;
        v.push_back(x);
    }
    
    int z;
    cin >> z;
    z -= 1;
    v.erase(v.begin()+z);

  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
    }

 cout << endl;

    int a,b;
    cin >> a >> b;
    a -= 1;
    b -= 1;

    v.erase(v.begin()+a, v.begin()+b);
 cout << v.size() << endl;


     for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
    }
    

    
    
    return 0;
}
