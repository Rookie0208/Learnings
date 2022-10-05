// #include <iostream>
// #include <stdexcept>
#include<bits/stdc++.h>

using namespace std;


int largest_proper_divisor(int n) {

    /*
    if (n == 0) {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    */

    for (int i = n/2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1; // will never happen
}



void process_input(int n) {
    try {
        if(n == 0) {
    throw invalid_argument("largest proper divisor is not defined for n=0");
        }
        if(n == 1) {
            throw invalid_argument("largest proper divisor is not defined for n=1");
        }
    int d = largest_proper_divisor(n);
    cout << "result=" << d << endl;
} 
catch (exception e) { // exception e or const invalid_arument&;
    cout << "largest proper divisor is not defined for n="<< n << endl;
}
    cout << "returning control flow to caller";
}

/*
int main() {
    int n;
    cin >> n;
    process_input(n);
    return 0;
}
*/

/*
vector<int> parseInts(string str) {
    // Complete this function

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
*/