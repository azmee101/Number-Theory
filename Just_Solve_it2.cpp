#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX = 1e6+7;
int div_count[MAX];

int32_t main()
{
    NEED_FOR_SPEED;
    int n; cin >> n;
    int arr[n];
    int hash_array[MAX];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        hash_array[arr[i]]++;
    }

    for(int i = 1; i <= MAX-7; i++){
        for(int j = i; j <= MAX-7; j+=i){
            div_count[i] += hash_array[j];
        }
    }

    for(int i = 1; i <= MAX-7; i++){
        cout << div_count[i] << '\n';
    }
    return 0;
}