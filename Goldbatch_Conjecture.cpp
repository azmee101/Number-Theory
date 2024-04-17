
// https://lightoj.com/problem/goldbach-s-conjecture

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1e7+7;
bool arr[N];

void sieve(){
    arr[1] = true;
    for(int i = 4; i <= N-7; i+=2){
        arr[i] = true;
    }
    for(int i = 3; i*i <= N-7; i+=2){
        if(arr[i] == false){
            for(int j = i*i; j <= N-7; j+=i){
                arr[j] = true;
            }
        }
    }
}

void solve(int cnt){
    int n; cin >> n;
    int ans = 0;
    if(n == 4){
        printf("Case %d: 1\n", cnt);
        return;
    }
    for(int i = 3; i <= n/2; i+=2){
        if(n-i >= i){
            if(arr[i] == false && arr[n-i] == false){
                ans++;
            }
        }
        else break;
    }
    printf("Case %d: %d\n", cnt, ans);
}

int32_t main()
{
    NEED_FOR_SPEED;
    sieve();
    int t; cin >> t;
    int cnt = 0;
    while(t--){
        solve(++cnt);
    }
    return 0;
}