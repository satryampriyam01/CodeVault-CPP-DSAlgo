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

ll V;
ll E;
ll vst[100005];
ll k = 0;
void dfs(int sv, vector<ll> adj[])
{
	vst[sv] = 1;
	for (int i = 0; i < adj[sv].size(); i++)
	{
		if (vst[adj[sv][i]] == 0)
		{	k++;
			dfs(adj[sv][i], adj);
		}
	}
	return;
}
void solve()
{

	cin >> V;
	cin >> E;
	vector<ll> adj[V + 1];
	clr(vst);
	while (E--)
	{
		ll sv, ev;
		cin >> sv;
		cin >> ev;
		adj[sv].pb(ev);
		adj[ev].pb(sv);
	}
	ll res = V * (V - 1) / 2;//total pairs we can make
	for (int i = 0; i < V; i++)
	{
		k = 0;
		if (vst[i] == 0)
		{
			dfs(i, adj);
			res -= k * (k + 1) / 2;
			//it is used to calculate total pairs in one country and subtracted from total avaiable make_pair// largest if each astrauntnuat
			//if each astraunt is from different country then total pair is
			//v*(V-1)/2;
			// each country astrunt cointains are made thier pair and subtracted from
			//total as  2 astronaut cnat be their representing same country
		}
	}
	cout << res << endl;

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