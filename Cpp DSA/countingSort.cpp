// count array
// prefix sum array
// final array with the help of original array

#include <bits/stdc++.h>
using namespace std;
const int N = 50;
// int prefix_sum[N];

void countingSort(int a[], int n, int prefix_sum[])
{
    int result[n];

    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] += prefix_sum[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        result[--prefix_sum[a[i]]] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int count[10] = {
        0,
    };

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }
    countingSort(a, n, count);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
}