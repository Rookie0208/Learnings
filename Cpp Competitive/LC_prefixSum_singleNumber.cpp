/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N];

int main() {
	vector<int> v;
	int n;
	cin >> n;
	for(int i = 0; i<n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
		
	}
	for(int i = 0; i<v.size(); i++) {
		hsh[v[i]]++;
	}
	for(int i = 0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	for(int i = 0; i<v.size(); i++) {
		if(hsh[i] == 1) {
			cout << hsh[i];
		}
	}
}