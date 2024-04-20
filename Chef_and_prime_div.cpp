#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    NEED_FOR_SPEED;
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        while(__gcd(a, b) != 1){
            b /= __gcd(a, b);
        }
        if(b == 1){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }
    return 0;
}