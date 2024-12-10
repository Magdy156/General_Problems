#include <iostream>
using namespace std;
#define ll long long
#include <map>

ll fix(ll x, ll mod){
    return ((x % mod) + mod) % mod;
}

int main(){
    int n; cin >> n;
    ll pre[n + 1] = {};
    for(int i = 1; i <= n; i++){
		cin >> pre[i];
        pre[i] += pre[i - 1];
        pre[i] = fix(pre[i], n);
    }
	map<ll, ll> m;
	ll ans = 0;
	for(int j = 0; j <= n; j++){
		ans += m[pre[j]];
		m[pre[j]]++;
	}
	cout << ans;
    return 0;
}
