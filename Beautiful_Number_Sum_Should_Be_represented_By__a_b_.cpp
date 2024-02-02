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

ll a, b, n;
const int N = 1e6 + 100;
ll fact[N];
void initfact() {
	fact[0] = 1;
	for (int i = 1; i < N; i++) {
		fact[i] = (fact[i - 1] * i);
		fact[i] %= MOD;
	}
}
ll binpow(ll val, ll deg, ll mod) {
	if (!deg) return 1 % mod;
	if (deg & 1) return binpow(val, deg - 1, MOD) * val % MOD;
	long long res = binpow(val , deg >> 1, MOD);
	return (res * res) % mod;
}

ll helper_count(ll val, ll i)
{
	ll res = fact[n];
	ll div = fact[n - i] * fact[i];
	div %= MOD;  div = binpow(div, MOD - 2, MOD);
	return (res * div) % MOD;
}

bool helper_chk(ll val)
{
	while (val)
	{
		if (val % 10 != a && val % 10 != b)
		{
			return false;
		}
		val /= 10;

	}
	return true;
}
void solve()
{
	initfact();
	cin >> a >> b;
	cin >> n;
	ll ans = 0;
	for (ll i = 0; i <= n; i++)
	{
		ll val = a * (i) + b * (n - i);
		//cout << val << endl;
		if (helper_chk(val))
		{
			ans += helper_count(val, i);
			ans %= MOD;
		}
	}
	cout << ans << endl;

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