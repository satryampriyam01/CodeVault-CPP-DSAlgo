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
#include <sstream> //covert string to number //by passing object
#include<numeric>//lcm;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define MOD 1000000009
#define ll long long
using namespace std;
/**
        Name->Boss Bitch;
        Id->Satyampriyam01;
       **/


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l;
    cin >> l;
    while (l--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != 1)
            {
                v.push_back(arr[i]);
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n - v.size(); i++)
        {
            cout << 1 << " ";
        }
        if (v.size() == 2 && v[0] == 3 && v[1] == 2)
        {
            cout << 2 << " " << 3;
        }
        else
        {
            for (int i = 0; i < v.size(); ++i)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }




}