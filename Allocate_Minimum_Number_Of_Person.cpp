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
bool helper(int *arr, int n, int people, int workload)
{
    int sum = 0;
    int student = 1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > workload)
        {
            //need student
            student++;
            sum = arr[i]; //refresh workload
        }
        if (student > people)
        {
            return false;
        }
    }
    return true;

}
int b_helper(int arr[], int n, int people)
{
    if (n < people)//book are less than people each person need one book
    {
        return -1;
    }

    int maxi = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    int se = maxi;
    int en = sum;
    int res = INT_MAX;
    while (se <= en)
    {
        int workload = (se + en) / 2;
        if (helper(arr, n, people, workload)) //if that much world load can be carried by(atmost) m student
        {
            res = min(res, workload);
            //decrease workload
            en = workload - 1;
        }
        else
        {
            //increse workload
            se = workload + 1;
        }
    }
    return res;

}
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
        int c;

        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = b_helper(arr, n, c);
        cout << ans << endl;
    }


}