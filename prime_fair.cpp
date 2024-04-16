
// https://www.spoj.com/problems/VECTAR8/en/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1e6+7;
bool arr[N];
vector<int> primes;
vector<int> aprimes;

void sieve(){
    arr[0] = true;
    arr[1] = true;
    primes.push_back(2);
    for(int i = 4; i <= N-7; i+=2){
        arr[i] = true;
    }
    for(int i = 3; i*i <= N-7; i+=2){
        if(arr[i] == false){
            for(int j = i*i; j <= N-7; j+=i){
                arr[j] = true;
            }
        }
    }
    for(int i = 3; i <= N-7; i+=2){
        if(arr[i] == false){
            primes.push_back(i);
        }
    }

    for(int i = 0; i < primes.size(); i++){
        if(primes[i] < 10) aprimes.push_back(primes[i]);
        else{
            string str = to_string(primes[i]);
            int x = primes[i];
            bool flag = false;
            while(str.size() > 1){
                if(arr[x] == true || str[0] == '0'){
                    flag = true;
                    break;
                }
                str.erase(0, 1);
                x = stoi(str);
            }
            x = stoi(str);
            if(arr[x] == true){
                flag = true;
            }
            if(flag == false) aprimes.push_back(primes[i]);
        }
    }
}

void solve(){
    int n; cin >> n;
    cout << upper_bound(aprimes.begin(), aprimes.end(), n) - aprimes.begin()<< '\n';
}

int32_t main()
{
    NEED_FOR_SPEED;
    sieve();
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}