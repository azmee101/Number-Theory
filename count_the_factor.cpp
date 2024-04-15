// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1640


#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1000000+7;
int spf[N];
set<int> s[N];

void smallest_prime_factor(){
    for(int i = 2; i <= N-7; i++){
        if(spf[i] == 0){
            for(int j = i; j <= N-7; j+=i){
                spf[j]++;
            }
        }
    }
}

int32_t main()
{
    NEED_FOR_SPEED;
    smallest_prime_factor();
    int n;
    while(cin >> n && n){
        cout << n << " : "<< spf[n] << '\n';
    }
    return 0;
}