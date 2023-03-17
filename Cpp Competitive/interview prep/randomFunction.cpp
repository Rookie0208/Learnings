#include <bits/stdc++.h>
using namespace std;
class static Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int k = 0;
        int sum = 0;
      for(int i = 0; i < nums.size(); i++) {
            sum += i * nums[i];    // stores sum according to the count of the element.
            k += nums[i];          // stores sum of the array elements.
      }
      int maxi = sum;
      int prev_sum = sum;
      int next_sum = 0;
      for(int i = nums.size()-1; i>= 0; i--) {
        next_sum = prev_sum + k - (nums.size() * nums[i]);
        maxi = max(next_sum,maxi);
        prev_sum = next_sum;
      }
      return maxi;
    }

};

    int main() {
        int n; 
        cin >> n;
        std::vector<int> a(n);
        for(int i = 0; i<n; i++) {
            cin >> a[i];
        }
        Solution s = new Solution;
        int ans = s.maxRotateFunction(a);
        cout << ans;
}