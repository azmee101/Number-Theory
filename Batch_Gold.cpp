// https://codeforces.com/problemset/problem/749/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    NEED_FOR_SPEED;
    int n; cin >> n;
    if(n % 2 == 0){
        cout << n/2 << '\n';
        for(int i = 0; i < n/2; i++){
            cout << 2 << ' ';
        }cout << '\n';
    }
    else{
        n -= 3;
        cout << 1 + n/2 << '\n';
        for(int i = 0; i < n/2; i++){
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
    }
    return 0;
}