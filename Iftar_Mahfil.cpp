// https://lightoj.com/problem/iftar-party

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(int cnt){
    ll n, x; cin >> n >> x;
    n -= x;
    vector<ll> divs;
    for(ll i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(i > x) divs.push_back(i);
            if(i != (n/i) && (n/i) > x){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    if(divs.size() == 0){
        printf("Case %d: impossible\n", cnt);
    }
    else{
        printf("Case %d: ", cnt);
        for(auto &x : divs){
            printf("%lld ", x);
        }puts("");
    }
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t; cin >> t;
    int cnt = 0;
    while(t--){
        solve(++cnt);
    }
    return 0;
}