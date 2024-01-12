
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
#include<string>

using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int j = 0;
	string str = "check";
	unordered_map<char, int> amp;
	for (int i = 0; i < str.length(); ++i)
	{
		amp[str[i]]++;
	}
	for (int i = 0; i < 10; ++i)
	{
		char s;
		scanf("%c", &s);
		if (amp[s] != 0)
		{
			amp[s]--;

			printf("WELL_DONE\n");
		}


	}
	int flag = 0;
	for (auto i = amp.begin(); i != amp.end(); i++)
	{
		if (i->second != 0)
		{	flag = 1;
			printf("YOU_LOSE");
			break;
		}
	}

	if (flag == 0)
	{
		printf("YOU_WON");
	}





}
