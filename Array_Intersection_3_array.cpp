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
    int *arr3 = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> arr3[i];
    }
    sort(arr, arr + n, greater<int>());
    sort(arr2, arr2 + n, greater<int>());
    sort(arr3, arr3 + n, greater<int>());
    int l = 0, k = 0, r = 0;
    while (l < n && k < n && r < n )
    {
        if (arr[l] == arr2[k] && arr2[k] == arr3[r])
        {
            cout << arr[l] << " ";
            l++; r++; k++;
        }
        if (arr[l] > arr2[k] || arr[l] > arr3[r])
        {
            l++;
        }
        if (arr2[k] > arr[l] || arr2[k] > arr3[r])
        {
            k++;
        }
        if (arr3[r] > arr[l] || arr3[r] > arr2[k])
        {
            r++;
        }


    }

}
