#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    NEED_FOR_SPEED;
    ll l, r;
    cin >> l >> r;
    printf("YES\n");
    for(int i = l; i <= r; i+=2){
        cout << i << ' ' << i+1 << '\n';
    }
    return 0;
}