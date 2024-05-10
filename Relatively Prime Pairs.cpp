
// https://codeforces.com/problemset/problem/1051/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    NEED_FOR_SPEED;
    ll l, r;
    cin >> l >> r;
    cout << "YES" << '\n';
    for(ll i = l; i <= r; i+=2){
        cout << i << ' ' << i+1 << '\n';
    }
    return 0;
}