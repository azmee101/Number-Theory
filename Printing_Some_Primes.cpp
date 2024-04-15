

// https://www.spoj.com/problems/TDPRIMES/en/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1e8 + 7;
bitset<N> v;
vector<int> primes;

int32_t main()
{
    NEED_FOR_SPEED;
    primes.push_back(2);
    for(int i = 3; i*i <= N-7; i+=2){
        if(v[i] == false){
            for(int j = i*i; j <= N-7; j+=i){
                v[j] = true;
            }
        }
    }
    for(int i = 3; i <= N; i+=2){
        if(v[i] == false){
            primes.push_back(i);
        }
    }
    for(int i = 0; i < primes.size(); i+=100){
        cout << primes[i] << '\n';
    }
    return 0;
}