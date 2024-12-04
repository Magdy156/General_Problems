#include <iostream>
using namespace std;
#define ll long long
#include <map>

int main(){
    int n, x; cin >> n >> x;
    ll pre[n + 1] = {};
    for(int i = 1; i <= n; i++){
		cin >> pre[i];
        pre[i] += pre[i - 1];
    }
	map<ll, ll> m;
	ll ans = 0;
	for(int j = 0; j <= n; j++){
		ll ser = pre[j] - x;
		ans += m[ser];
		m[pre[j]]++;
	}
	cout << ans;
    return 0;
}
