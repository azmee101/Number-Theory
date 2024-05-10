#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    NEED_FOR_SPEED;
    ll n; cin >> n;
    n = sqrtl(n);
    ll ans = 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            ans = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1) ans = max(ans, n);
    cout << ans << '\n';
    return 0;
}