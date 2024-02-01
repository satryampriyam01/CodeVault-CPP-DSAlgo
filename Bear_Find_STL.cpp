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
#define MOD 1000000009
using namespace std;
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str2 = "bear";
	string str;
	cin >> str;
	vector<int> v;
	ll sum = 0;
	for (int i = 0; i < str.size(); i++)
	{
		int pos = (str.substr(i)).find(str2);
		if (pos != -1)
		{
			sum = sum + 1 + str.substr(i).size() - pos - 4;
		}
	}
	cout << sum << endl;




}
