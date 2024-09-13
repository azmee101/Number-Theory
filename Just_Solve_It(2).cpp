/* https://vjudge.net/problem/gym-310911f

calculate 

1. (a^b) % m
2. (a * b) % m
3. (a/b) % m

(1 ≤ a,b,m ≤10^18)

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


ll mul_mod(ll a, ll b, ll m){

    return __int128(a)*b % m;
}


ll bin_exp(ll a, ll b, ll m){

    ll res = 1;
    while(b > 0){
        if(b & 1) res = mul_mod(res, a, m);
        a = mul_mod(a, a, m);
        b >>= 1;
    }
    return res;
}

ll inverse(ll a, ll m){

    return bin_exp(a, m-2, m);
}

void solve(){
    
    ll a, b, m; cin >> a >> b >> m;
    
    cout << bin_exp(a, b, m) << '\n';
    cout << mul_mod(a, b, m) << '\n';
    cout << mul_mod(a, inverse(b, m), m) << '\n';
    return;
}

int32_t main()
{
    NEED_FOR_SPEED;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}