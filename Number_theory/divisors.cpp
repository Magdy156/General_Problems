#include <iostream>
using namespace std;
#include <vector>
#define ll long long

vector<ll> divisors(ll n){
    vector<ll> ret;
    for(ll i = 1; i * i <= n; i++){
        if((n % i) == 0){
            ret.push_back(i);
            if (n != i * i) ret.push_back(n / i);
        }
    }
    return ret;
}


int main(){
    vector<ll> v = divisors(16);
    for(auto it:v) cout << it << ' ';
    return 0;
}
