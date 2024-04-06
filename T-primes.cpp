
// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 1e6+7;
bool arr[MAX];
bool primes[MAX];

void sieve(){
    primes[2] = true;
    for(int i = 3; i * i <= MAX-7; i++){
        if(arr[i] == false){
            for(int j = i*i; j <= MAX-7; j+=i){
                arr[j] = true;
            }
        }
    }
    for(int i = 3; i <= MAX-7; i+=2){
        if(arr[i] == false){
            primes[arr[i]] = true;
        }
    }
}

bool perfect_square(ll x){
    int r = sqrt(x);
    if(r*r == x) return true;
    else return false;
}

int32_t main()
{
    NEED_FOR_SPEED;
    sieve();
    int n; cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(perfect_square(arr[i]) == true){
            int x = sqrt(arr[i]);
            if(primes[x] == true){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}