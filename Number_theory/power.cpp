#include <iostream>
using namespace std;
#define ll long long


ll power(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    ll ret = 1;
    if (b & 1) ret = a; // if b is odd
    return ret * power(a, b / 2) * power(a, b / 2); 
}

int main(){
    ll res = power(5, 3);
    cout << res << '\n';
    return 0;
}
