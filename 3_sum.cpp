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
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define MOD 1000000009
using namespace std;
#define ll long long
vector<vector<int>> helper(vector<int> v)
{
	sort(v.begin(), v.end());
	vector<int> v2;
	vector<vector<int>> v_res;
	for (int i = 0; i < v.size(); i++)

	{
		int se = i + 1;
		int en = v.size() - 1;
		while (se < en)
		{
			if (v[i] + v[en] + v[se] == 0)
			{
				v2.push_back(v[i]);
				v2.push_back(v[se]);
				v2.push_back(v[en]);
				v_res.push_back(v2);
				v2.clear();
				se++;
				en--;
				while (se < en && v[se] == v[se - 1])
				{
					se++;
				}
				while (se < en && v[en] == v[en + 1])
				{
					en--;
				}

			}
			if (v[i] + v[en] + v[se] < 0)
			{
				se++;
				while (se < en && v[se] == v[se - 1])
				{
					se++;
				}
			}
			if (v[i] + v[en] + v[se] > 0)
			{
				se++;
				while (se < en && v[en] == v[en + 1])
				{
					en--;
				}
			}

		}

	}
	return v_res;
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

	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	vector<vector<int>> v_res = helper(v);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << v_res[i][j] << " ";
		}
		cout << endl;
	}







}


