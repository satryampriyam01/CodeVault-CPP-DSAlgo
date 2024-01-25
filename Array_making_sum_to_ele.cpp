#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<deque>
#include<vector>
#include<math.h>
#include<climits>
#include<map>
#include<string.h>
#define MOD 1000000009
using namespace std;
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int *arr = new int[n];
    int *arr2 = new int[n];
    int r;
    cin >> r;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    sort(arr, arr + n);
    sort(arr2, arr2 + n);
    int l = 0; int j = n - 1;
    while (l < n && r > 0)
    {
        if (arr[l] + arr2[j] == r)
        {
            cout << arr[l] << " " << arr2[j] << endl;
            l++; j--;
        }
        if (arr[l] + arr2[j] < r)
        {
            l++;
        }
        if (arr[l] + arr2[j] > r)
        {
            j--;
        }

    }
}
