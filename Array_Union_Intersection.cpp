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
void intsec(int *arr, int*arr2, int n)
{
    int l = 0, k = 0;
    while (l < n && k < n)
    {
        if (arr[l] < arr2[k])
        {
            l++; continue;
        }
        if (arr2[k] < arr[l])
        {
            k++; continue;
        }
        if (arr[l] == arr2[k])
        {
            cout << arr[l] << " ";
            l++; k++; continue;
        }
    }
    cout << endl;

}
void uni(int *arr, int*arr2, int n)
{
    int l = 0, k = 0;
    while (l < n && k < n)
    {
        if (arr[l] < arr2[k])
        {
            cout << arr[l] << " ";
            l++; continue;
        }
        if (arr2[k] < arr[l])
        {
            cout << arr[k] << " ";
            k++; continue;
        }
        if (arr[l] == arr2[k])
        {
            l++; k++; continue;
        }
    }
    while (l < n)
    {
        cout << arr[l++] << " ";
    }
    while (k < n)
    {
        cout << arr2[k++] << " ";
    }
    cout << endl;

}
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
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr2[i];
    }
    sort(arr2, arr2 + n);
    uni(arr, arr2, n);
    intsec(arr, arr2, n);


}
