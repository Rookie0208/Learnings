#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v) {
    set<int> s;
    int maxi = 0;
    // insert number into the set : operation takes O(n) time.
    // sorting takes O(nlogn) time, that's why we used set here.
    for(int &i : v) {
        s.insert(i);
    }
    for(int i : s) {
        if(!s.count(i-1)) {
            int currentNum = i;
            int currentStreak = 1;
            while(s.count(currentNum+1)) {
                currentNum += 1;
                currentStreak++;
            }
            maxi = max(maxi,currentStreak);
        }
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << solve(v);
}