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
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define MOD 1000000009
#define ll long long
using namespace std;
/**
        Name->Boss Bitch;
        Id->Satyampriyam01;
**/
//ll n = 5;


int helper(const std::vector<unsigned>& input, unsigned pos, unsigned moves)
{
    assert(!input.empty());
    assert(pos < input.size());

    std::vector<unsigned> parSum(input.size()); // 1
    std::partial_sum(input.begin(), input.end(), parSum.begin());

    unsigned result = 0;
    for (unsigned i = 0; i <= std::min(pos, moves); ++i)
    {
        unsigned first = pos - i;
        unsigned last = std::max(pos, std::min(pos + (moves - i * 2), unsigned(input.size() - 1)));
        result = std::max(result, first ? parSum[last] - parSum[first - 1] : parSum[last]); // 2
    }

    return result;
}

const int N = 100007;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<unsigned> v(n);
    ll k, m;
    cin >> k;
    cin >> m;

    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cout << helper(v, k, m) << endl;
    cout << endl;


}