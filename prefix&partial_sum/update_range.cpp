#include<iostream>
using namespace std;
#define ll long long


int main(){
    int n, q; cin >> n >> q;
    ll s[n + 2] = {};

    for(int i = 1; i <= n; i++){
        cin >> s[i];
    }

    ll par[n + 2] = {};
    while(q--){
        ll l, r, val; cin >> l >> r >> val;
        par[l] += val;
        par[r + 1] -= val;
    }

    for(int i = 1; i <= n; i++){
        par[i] += par[i - 1];
        }

    for(int i = 1; i <= n; i++){
        cout << s[i] + par[i] << ' ';
    }
    return 0;
}
