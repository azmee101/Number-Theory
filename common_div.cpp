// https://codeforces.com/problemset/problem/1203/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    NEED_FOR_SPEED;
    int n; cin >> n;
    ll arr[n];
    ll gcd = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        gcd = __gcd(arr[i], gcd);
    }
    vector<ll> div;
    for(ll i = 1 ; i*i <= gcd; i++){
        if(gcd % i == 0){
            div.push_back(i);
            if(i != gcd/i){
                div.push_back(gcd/i);
            }
        }
    }
    cout << div.size() << '\n';
    return 0;
}