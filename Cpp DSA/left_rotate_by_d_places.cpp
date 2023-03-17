#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int d)
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[(i + d) % n] = a[i % (n)] ;
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, count;
    cin >> n >> count;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    solve(a, n, count);
}