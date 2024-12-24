#include <iostream>
using namespace std;
#define ll long long
ll n, arr[20];
int calc(int idx = 1, ll sum = arr[0]){
    //basecase
    if (idx == n){
        if (sum == 0) return 0;
        else return 1e5;
    }
    //transition
    ll val1 = arr[idx], val2 = -arr[idx];
    if (arr[idx] < 0) swap(val1, val2);
    int plus = calc(idx + 1, sum+val1) + (arr[idx] < 0);
    int minus = calc(idx + 1, sum+val2) + (arr[idx] > 0);
    return min(plus, minus);
}
int main(){
    cin >> n;
    cin >> arr[0];
    for(int i = 1; i < n; i++){
        char sign; cin >> sign;
        cin >> arr[i];
        if(sign == '-') arr[i] *= -1;
    }
    int ans = calc();
    if (ans > 20) cout << -1;
    else cout << ans;
    return 0;
}
