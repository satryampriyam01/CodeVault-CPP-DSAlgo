#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<deque>
#include<string.h>
#include<vector>
#include<math.h>
#include<climits>
#include<map>
#include<string.h>
#include <sstream> //covert string to number //by passing object
#include<numeric>//lcm;
#include<set>
#include<math.h>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define MOD 1000000007
#define ll long long
#define MM(a) memset(a,0,sizeof(a))
#define cel(n,k) ((n-1)/k+1)
#define sets(a) memset(a, -1, sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define max(a,b) ((a)>(b)? (a):(b))
#define min(a,b) ((a)<(b)? (a):(b))
#define fr(n,i) for(ll i=0;i<n;i++)
#define fr1(n,i) for(ll i=1;i<=n;i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'

using namespace std;
/**
        Name->Boss Bitch;
        Id->Satyampriyam01;
        Rise And Fall Are part of "The Journey";
**/

const int maxn = 2e5 + 5;
const double PI = 3.14159265358979323846;



bool helper(ll i, ll mid, ll k, vector<ll> &pre, ll val)
{
	ll cst = (i - mid + 1) * val - (pre[i] - pre[mid - 1]);
	return cst <= k;
}
void solve()
{

	ll n;
	cin >> n;
	ll k;
	cin >> k;
	vector<ll> v(n + 1);
	v[0] = INT_MIN;
	fr1(n, i)
	{
		cin >> v[i];
	}
	sort(all(v));
	vector<ll> pre(n + 1);
	fr1(n, i)
	{
		pre[i] = pre[i - 1] + v[i];
	}
	ll maxi = 1;
	ll ans = v[1];
	for (ll i = 2; i < n + 1; i++)
	{
		ll lef = 1;
		ll rgt = i;
		ll cnt = 0;
		while (rgt - lef > 1)
		{
			ll mid = (lef + rgt) / 2;
			if (helper(i, mid, k, pre, v[i]))//qualify so puch j near to staring index
			{	//by putting rgt=mid it will reduce mid
				rgt = mid;
			}
			else
			{
				lef = mid + 1;
			}
		}
		if (helper(i, lef, k, pre, v[i]))
		{
			cnt = (i - lef + 1);
		}
		else
		{
			cnt = (-rgt + i + 1);
		}
		if (cnt > maxi)
		{
			ans = v[i];
			maxi = cnt;
		}

	}
	cout << maxi << " " << ans << endl;

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
	ll l = 1;
	//cin >> l;
	while (l--)
	{
		solve();
	}
	return 0;


}