#include <iostream>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if(b > a) swap(a, b);
    if(b == 0) return a;
    return gcd(a % b, b);
}

ll lcm(ll a, ll b){
    return (a * b) / gcd(a, b);
}

int main(){
    ll res = lcm (3, 4);
    cout << res << '\n';
    return 0;
}
