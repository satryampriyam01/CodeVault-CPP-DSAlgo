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
    ll n;
    cin >> n;
    int *arr = new int[n];
    int *output = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        int x = arr[i];
        for (int j = 0; j < n; ++j)
        {
            if (j == i)
            {
                continue;
            }
            if (x > arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << x << " ";
        }
    }


}
