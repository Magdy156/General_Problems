#include <iostream>
using namespace std;
#define ll long long

const int N = 1e5;
ll freq1[N], freq2[N];

void primeFactors(ll n,ll freq[N]){
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            int c = 0;
            while(n % i == 0){
                n /= i;
                c++;
            }
            freq[i] += c;
        }
    }
    if(n > 1) freq[n]++; // means n is prime
}

int main(){
    int n; cin >> n;
    while(n--){
        ll x; cin >> x;
        primeFactors(x, freq1);
    }
    int m; cin >> m;
    while(m--){
        ll x; cin >> x;
        primeFactors(x, freq2);
    }
    for(ll i = 0; i < N; i++){
        int mn = min(freq1[i], freq2[i]);
        while(mn--) cout << i << ' ';
    }
    return 0;
}
