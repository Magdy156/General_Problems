#include <iostream>
using namespace std;
#define ll long long
#include <map>


map<ll, ll> m;

void primeFactors(ll n){
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            int c = 0;
            while(n % i == 0){
                n /= i;
                c++;
            }
            m[i] += c;
        }
    }
    if(n > 1) m[n]++; // means n is prime
}

int main(){
    ll t; cin >> t;
    while(t--){
        m.clear();
        ll n, q; cin >> n >> q;
        primeFactors(n);
        while(q--){
            ll op, x; cin >> op >> x;
            if (op == 1) primeFactors(x);
            else{
                string ans = "Integer\n";
                for(auto [a, b]:m){
                    if(b % x != 0){
                        ans = "Not integer\n";
                        break;
                    }
                }
                cout << ans;
            }
        }
    }
    return 0;
}
