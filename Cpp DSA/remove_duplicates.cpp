#include <bits/stdc++.h>
using namespace std;

#define cc(a) cout << (a)
#define cs(x) cout << (x) << "\n"
#define css(a, b) cout << (a) << " " << (b) << "\n"
#define ll long long int
#define M 1e9 + 7
#define INF 1e18
#define endl "\n"
#define pb(x) push_back(x)
#define eb emplace_back()
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
// #define mp 			map
#define ff first
#define ss second
#define mid(l, r) (l) + (r) >> 1
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define rloop(i, a, b) for (int i = (a); i >= (b); i--)
#define forIt(it, a, b) for (auto it = (a); it != (b); it++)
#define ploop(arr, a, b)            \
    for (int i = (a); i < (b); i++) \
        cout << (arr[i]) << " ";
#define uns using namespace std

int set_method(int a[], int n)
{
    set<int> s;
    loop(i, 0, n)
    {
        s.insert(a[i]);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    return s.size();

    // TC : O(n*log(n))
}

// TWO POINTER ALGO :
// if(a[1] != a[0]) {0++, a[0] = a[1]}
int twoPointerAlgo(int a[], int n)
{
    int j = 0;
    loop(i, 1, n)
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }
    return j+1;
}

const int N = 1e5 + 10;
int main()
{
    int n, maxi = 0;
    cin >> n;
    int a[n], count[N] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        count[a[i]]++;
    }
    sort(a, a + n);
    cs(set_method(a, n));
    cs(twoPointerAlgo(a,n));
}