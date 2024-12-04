#include <iostream>
using namespace std;
#define ll long long

int main(){
    int n, q; cin >> n >> q;
    ll prefix[n+1] = {};
    // forming the prefix array based 1
    for(int i = 1; i <= n; i++){
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
    }
    while(q--){
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
    return 0;
}
