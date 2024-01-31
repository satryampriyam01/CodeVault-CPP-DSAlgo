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

int n, m, x, y, i, j, k;
int dp[1005][2], a[1005];
char b[1005][1005];

void solve()
{
	while (~scanf("%d%d%d%d", &n, &m, &x, &y))
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for (i = 0; i < n; i++)
		{
			scanf("%s", b[i]);
			for (j = 0; j < m; j++)
				if (b[i][j] == '#')
					a[j + 1]++;
		}

		for (i = 1; i < m; i++)
			a[i + 1] += a[i];
		for (i = 0; i <= m; i++)
			dp[i][0] = dp[i][1] = m * n;
		dp[0][1] = dp[0][0] = 1;
		for (i = 0; i < m; i++)
		{
			for (j = x; j <= y && i + j <= m; j++)
			{
				dp[i + j][0] = min(dp[i + j][0], dp[i][1] + (a[i + j] - a[i]));
				dp[i + j][1] = min(dp[i + j][1], dp[i][0] + j * n - (a[i + j] - a[i]));
				//cout<<dp[i+j][0]<<"***"<<dp[i+j][1]<<" ";
			}
			//cout<<endl;
		}
		cout << min(dp[m][0], dp[m][1]) - 1 << endl;
	}


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