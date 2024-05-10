
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1335

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll MAX = 2e8+7;
vector<bool> v(MAX, false);
vector<ll> ans;

void sieve(){
    v[2] = false;
    for(ll i = 3; i*i <= MAX; i+=2){
        if(v[i] == false){
            for(ll j = i*i; j <= MAX; j+=i){
                v[j] = true;
            }
        }
    }
    // ans.push_back(2);
    for(ll i = 3; i <= MAX-7; i+=2){
        if(v[i] == false && v[i+2]== false){
            ans.push_back(i);
            ans.push_back(i+2);
        }
    }
}

int32_t main()
{
    NEED_FOR_SPEED;
    sieve();
    int n;
    while(scanf("%d", &n) != EOF){
        printf("(%lld, %lld)\n", ans[2*n-2], ans[2*n-1]);
    }
    return 0;
}