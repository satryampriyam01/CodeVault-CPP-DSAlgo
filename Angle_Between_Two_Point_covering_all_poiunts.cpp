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

class point
{
public:
	double x;
	double y;
};

void solve()
{

	ll n;
	cin >> n;
	vector<point> v(n);
	vector<double> v2;
	fr(n, i)
	{
		cin >> v[i].x;
		cin >> v[i].y;
		v2.pb(atan2(v[i].y, v[i].x));
	}

	sort(all(v2));//sort all the slope /angle find all trhe adjancent angle
	double maxi = 0.0;
	fr(n, i)
	{
		maxi = max(maxi, v2[i + 1] - v2[i]);
	}
	double ans = v2[0] - v2[n - 1];
	if (ans < 1e-7)
	{
		ans += 360 * PI / 180;
	}
	ans = max(ans, maxi);
	cout << setprecision(10) << 360 - (ans * 180 / PI) << endl;
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