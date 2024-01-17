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
#include<iomanip>
#pragma GCC optimize("Ofast")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define MOD 1000000007
#define ll long long
#define endl "\n"
#define here cout<<"I'm here\n";
#define F first
#define S second
#define pii pair<int,int>
#define pll pair<long long int , long long int>
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
using namespace std;



/**
        Name->Boss Bitch;
        Id->Satyampriyam01;
**/




clock_t time_p = clock();
void Satyam()
{
	time_p = clock() - time_p;
	cerr << "Time_Taken : " << (float)(time_p) / CLOCKS_PER_SEC << "\n";
}


/*--------------------------CODE STARTS HERE---------------------------------*/
vector<int> v;
int N = 1000000;
void prime()
{
	bool prime[N + 1];
	memset(prime, true, sizeof(prime));
	for (int i = 2; i * i <= N ; ++i)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= N; j += i)
			{
				prime[j] = false;
			}
		}
	}
	for (int i = 2; i <= N; ++i)
	{
		if (prime[i])
		{
			v.push_back(i);
		}
	}

}

int vst[100050];
vector<vector<int>> adj(100050);
double helper_dfs(int u)
{
	vst[u] = 1;
	double ans = 0;
	double k = 0;
	for (int i = 0; i < adj[u].size(); i++)
	{
		if (vst[adj[u][i]] == 0)
		{
			vst[adj[u][i]] = 1;
			ans = ans + helper_dfs(adj[u][i]);
			k++;
		}
	}
	if (k != 0)
	{
		ans = ans / k;
	}
	if (u != 1)
	{
		ans++;
	}

	return ans;
}
//839C - Journey;
void solve()
{
	int l;
	cin >> l;
	l--;
	while (l--)
	{
		int se, en;
		cin >> se >> en;
		adj[se].push_back(en);
		adj[en].push_back(se);
	}

	cout << fixed << setprecision(15) << helper_dfs(1) << endl;
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

	solve();
	Satyam();
}