
// https://onlinejudge.org/external/1/136.pdf

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll MAX = 1e9+7;

int32_t main()
{
    NEED_FOR_SPEED;
    vector<ll> factors;
    for(ll i = 1, p = 1; i <= 60; i++, p*=2){
        for(ll j = 1, q = 1; p*q <= MAX; j++, q*=3){
            for(ll k = 1, r = 1; p*q*r <= MAX; k++, r*=5){
                factors.push_back(p*q*r);
            }
        }
    }
    sort(factors.begin(), factors.end());
    printf("The 1500'th ugly number is %lld.\n", factors[1499]);
    return 0;
}