// How many numbers are divisible by n and m in the range [l,r] (inclusive)?

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


long long lcm(long long m, long long n) {
    long long gcd = __gcd(m, n); 
    return (m / gcd) * n; // Divide first to prevent overflow
}

int32_t main()
{
    NEED_FOR_SPEED;
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    if(n > r/m){
        cout << 0 << '\n';
        return 0;
    }
    ll x = lcm(n, m);
    cout << r/x - (l-1)/x << '\n';
    return 0;
}