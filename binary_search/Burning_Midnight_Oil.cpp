#include <iostream>
using namespace std;
#define ll long long

ll n, k;
bool check(ll mid){
    ll sum = mid;
    while(mid > 0){
        mid /= k;
        sum += mid;
    }
    return sum >= n;
}
int main(){
    cin >> n >> k;
    ll l = 1, r = n, ans = n;
    while(l <= r){
        ll mid = (l+r)/2;
        if (check(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
