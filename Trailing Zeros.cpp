// https://lightoj.com/problem/trailing-zeroes-i

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 1e6+7;
bool arr[MAX];
vector<int> primes;

void sieve(){
    primes.push_back(2);
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


int div_count(ll n){
    int tot_count = 1;
    for(int i = 0; i < primes.size() && primes[i]*primes[i] <= n ; i++){
        if(n % primes[i] == 0){
            int x = 0;
            while(n % primes[i] == 0){
                n /= primes[i];
                x++;
            }

            tot_count *= (x+1);
        }
    }
    if(n > 1) tot_count *= 2;
    return tot_count;
}

int32_t main()
{
    NEED_FOR_SPEED;
    sieve();
    int t; cin >> t;
    int CASE = 0;
    ll n;
    while(t--){
        cin >> n;
        ++CASE;
        printf("Case %d: %d\n", CASE, div_count(n)-1);
    }
    return 0;
}