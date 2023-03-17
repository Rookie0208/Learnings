#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        count[v[i]]++;
    }
    /*
    int prefix_sum[n]= {0};
    prefix_sum[0] = 0;
    for(int i = 1; i<3; i++) {
        prefix_sum[i] = prefix_sum[i-1]+count[i];
    }

    int b[n];
    for(int i = n-1; i>=0; i--) {
        --b[prefix_sum[i]] = count[i];
    }

    for(int i = 0; i<n; i++) {
        cout << b[i] << " ";
    }
    */

    // sort(v.begin(), v.end());
    // for(auto it : v) cout << it << " ";

/*
DUTCH NATIONAL FLAG ALGORITHM :
3 pointer approach : low = 0, high = n, mid = 0;
cases :
case 2 : mid == 0 {swap(a[mid], a[low]), low++ mid++}
case 1 : mid == 1 {mid++}
case 3 : mid == 2 {swap(a[mid], a[high]), high--}
TC : O(n)
SC : O(1)
*/
    int low = 0, mid = 0, high = v.size() - 1;
    while (mid <= high)
    {
        if (v[mid] == 1)
            mid++;
        else if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            low++;
            mid++;
        }
        else {
            swap(v[mid], v[high]);
            high--;
        }
    }
    for (auto it : v)
        cout << it << " ";
}