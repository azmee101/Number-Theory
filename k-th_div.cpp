
// https://codeforces.com/problemset/problem/762/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    NEED_FOR_SPEED;
    ll n, k; cin >> n >> k;
    vector<ll> divs;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            divs.push_back(i);
            if(i != (n/i)){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    if(divs.size() < k) printf("-1\n");
    else printf("%lld\n", divs[k-1]);
    return 0;
}