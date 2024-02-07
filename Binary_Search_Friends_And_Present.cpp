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
ll cnt, cnt2;
ll x, y;

bool b_search(ll n)
{


	ll r, r2, r3;
	r = n / x;
	r2 = n / y;
	r3 = n / (x * y);//both divible
	ll count = n - r - r2 + r3; //both divisible
	ll a = r2 - r3;//remove from friend 1
	ll b = r - r3;//remove from friend 2
	ll d = cnt - a;//now calculate it number are avaiable frind 1
	ll e = cnt2 - b;// now calculate number are avaiable for friend 2
	d = max(d, 0LL);
	e = max(e, 0LL);
	return (d + e <= count);//both are less than required so be can decrese gap or reduce mid

}

void solve()
{



	cin >> cnt >> cnt2;
	cin >> x >> y;

	ll lef = 0;
	ll rgt = 1e18;
	while (lef + 1 < rgt)
	{
		ll mid = (lef + rgt) / 2;
		if (b_search(mid))
		{
			rgt = mid;//decrese the range
		}
		else
		{
			lef = mid;//increse the range
		}

	}
	cout << rgt << endl;


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