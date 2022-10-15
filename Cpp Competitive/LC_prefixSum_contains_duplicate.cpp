/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

#include<bits/stdc++.h>
using namespace std;
// const N = 1e5;
// int hsh[N];


void duplicate(vector<int> &v) {
	bool isduplicate = false;
	unordered_map<int, int> hsh;
	

	for(int i = 0; i<v.size(); i++) {
		hsh[v[i]]++;
	}
	// for(int i = 0; i<v.size(); i++) {
	// 	cout << v[i] << " ";
	// }
	for(int i = 0; i< hsh.size(); i++) {
		if(hsh[i] > 1) {
			// cout << "true";
			isduplicate = true;
			break;
		} else {
			isduplicate = false;
			// cout << "false";
		}
	}
	if(isduplicate == true) {
		cout << "true";
	} else {
		cout << "false";
	}
}

int main() {
	vector<int> nums;
	int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    // display(nums);
    // cout << nums.size();
    duplicate(nums);
    // cout << s;
}