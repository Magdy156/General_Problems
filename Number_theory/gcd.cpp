#include <iostream>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if(b > a) swap(a, b);
    if(b == 0) return a;
    return gcd(a % b, b);
}

int main(){
    ll res = gcd(10, 9);
    cout << res << '\n';
    return 0;
}
