#include <bits/stdc++.h>
  
using namespace std;

class Solution {
public:

    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        std:: vector<int> countSec(10,0);
        std:: vector<int> countGue(10,0);
       
        for(int i = 0; i<secret.size(); i++) {
            if(secret[i] == guess[i]) bulls++;
            else {
                ++countSec[secret[i]-'0'];
                ++countGue[guess[i]-'0'];
            }
        }
        for(int i = 0; i<10; i++) {
            cows += min(countSec[i], countGue[i]);
        }
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
int main() {
    string a,b;
    cin >> a >> b;
    gitHint(a,b);
}
};