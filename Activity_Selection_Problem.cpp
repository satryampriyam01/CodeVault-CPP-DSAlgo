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
#pragma GCC optimize("Ofast")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define MOD 1000000009
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
/*
6
1 3 0 5 8 5
2 4 6 7 9 9


*/


/*--------------------------CODE STARTS HERE---------------------------------*/
void solve()
{

	ll n;
	cin >> n;
	vector<int> v_se(n);
	vector<int> v_en(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v_se[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> v_en[i];
	}
	multimap<pair<int, int>, int> amp;
	for (int i = 0; i < n; i++)
	{
		amp.insert({{v_en[i], i}, v_se[i]});
	}
	int t_lmt = 0;
	vector<int> res;
	for (auto i = amp.begin(); i != amp.end(); i++)
	{
		if (i->second > t_lmt)
		{
			t_lmt = i->first.first;
			res.push_back(i->first.second);
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
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

	solve();
	Satyam();
}