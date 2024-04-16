#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 500001;
ll arr[N];

void divisors_sum(){
    for(int i = 1; i <= N-1; i++){
        for(int j = i+i; j <= N-1; j+=i){
            arr[j] += i;
        }
    }
}

void solve(){
    int n; cin >> n;
    cout << arr[n] << '\n';
}

int32_t main()
{
    NEED_FOR_SPEED;
    divisors_sum();
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}