#include <bits/stdc++.h>
using namespace std;

int find_max(vector<int> &v)
{
    int count = 1;
    int i = 0, j = 1;
    int maxi = 0;
 
        while (j < v.size())
        {
            if (v[i] == v[j])
            {
                count++;
                maxi = max(count, maxi);
            }
            if (v[i] != v[j]){
                count = 1;
                i = j+1;
                j = i;
            }
            j++;
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

    cout << find_max(v);
}