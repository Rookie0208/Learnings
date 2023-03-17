#include<bits/stdc++.h>
using namespace std;

int main() {
    long long L,B;
    cin >> L >> B;

    //  vector<long long int> ans;
        long long mini = INT_MAX;
        long long maxi = 0;
        long long count = 0;
        if(L < B) {
            mini = L;
            maxi = B;
        }
        else {
            mini = B;
            maxi = L;
        }
        long long areaRect = L * B * 1LL;
        long long side = mini;
        long long area = side * side * 1LL;
        long long sum = 0;
        for(int i = 1; i< maxi; i++) {
            sum += area;
            count++;
            if(sum == areaRect) break;
            else if(sum > areaRect) {
                count = areaRect;
                side = 1;
                break;
            }
        }
cout << count << " "<< side << endl;
}