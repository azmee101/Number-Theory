#include<bits/stdc++.h>
using namespace std;

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long int
const int MAX = 1e6+7;
bool arr[MAX];
bool primes[MAX];
ll div_count[MAX];
ll div_sum[MAX];
int spf[MAX];

//for prime

void sieve(){
    primes[2] = true;
    for(int i = 3; i*i <= MAX-7; i+=2){
        if(arr[i] == false){
            for(int j = i*i; j <= MAX-7; j++){
                arr[j] = true;
            }
        }
    }
    for(int i = 3; i <= MAX-7; i+=2){
        if(arr[i]  == false){
            primes[i] = true;
        }
    }
}

// num_of_div, sum_of_div

void smallest_prime_factor(){
    for(int i = 2; i <= MAX-7; i++){
        spf[i] = i;
    }
    for(int i = 2; i <= MAX-7; i++){
        if(spf[i] == i){
            for(int j = i; j <= MAX-7; j+=i){
                spf[j] = min(spf[j], i);
            }
        }
    }
}

void play_with_divisors(){
    for(int i = 2; i <= MAX-7; i++){
        for(int j = i; j <= MAX-7; j+=i){
            div_sum[j] += i;
            div_count[j]++;
        }
    }
}

int main()
{
    NEED_FOR_SPEED;
    sieve();
    play_with_divisors();
    smallest_prime_factor();
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        set<int> s;
        if(primes[a[i]] == true){
            cout << a[i] << ' ' << a[i] << ' ' << 1 << ' ' << 1 << ' ' << 2 << ' ' << 1+a[i] << '\n';
        }
        else{
            int x = a[i];
            int tot_fact = 0;
            int gpf = 0;
            while(x > 1){
                // prime factorization using spf
                s.insert(spf[x]);
                gpf = max(gpf, spf[x]);
                x /= spf[x];
                tot_fact++;
            }
            cout << spf[a[i]] << ' ' << gpf << ' ' << s.size() << ' ' << tot_fact << ' ' << 1+div_count[a[i]] << ' ' << 1+div_sum[a[i]] << '\n';
        }
    }
    return 0;
}