#include <iostream>
using namespace std;
#include <vector>
#define ll long long


vector<pair<ll, ll>> primeFactors(ll n){
    vector<pair<ll, ll>> ret;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            int c = 0;
            while(n % i == 0){
                n /= i;
                c++;
            }
            ret.push_back({i, c});
        }
    }
    if(n > 1) ret.push_back({n, 1}); // means n is prime
    return ret;
}

int main(){
    vector<pair<ll, ll>> v = primeFactors(12);
    for(auto [a, b]:v) cout << a << ' ' << b << '\n';
    return 0;
}
