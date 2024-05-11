
// https://www.spoj.com/problems/ETF/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 1e6+7;
bool arr[MAX];
int spf[MAX];
vector<int> primes;

void sieve(){
    arr[1] = true;
    primes.push_back(2);
    for(int i = 4; i <= MAX-7; i+=2){
        arr[i] = true;
    }
    for(int i = 3; i*i <= MAX-7; i+=2){
        for(int j = i*i; j <= MAX-7; j+=i){
            arr[j] = true;
        }
    }
    
    for(int i = 3; i <= MAX-7; i+=2){
        if(arr[i] == false){
            primes.push_back(i);
        }
    }
}

void smallest_prime_factor(){
    for(int i = 2; i <= MAX-7; i++){
        spf[i] = i;
    }

    for(int i = 2; i <= MAX-7; i++){
        for(int j = i; j <= MAX-7; j+=i){
            spf[j] = min(spf[j], i);
        }
    }
}

void solve(){
    int n; cin >> n;
    int phi_of_n = 1;
    if(arr[n] == false){
        cout << n-1 << '\n';
    }
    else if(n == 1){
        cout << 1 << '\n';
    }
    else{
        while(n > 1){
            int p = spf[n], pw = 1;
            while(n % p == 0){
                pw *= p;
                n /= p;
            }
            phi_of_n *= (pw / p) * (p-1);
        }
        cout << phi_of_n << '\n';
    }
}

int32_t main()
{
    NEED_FOR_SPEED;
    sieve();
    smallest_prime_factor();
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}