#include <iostream>
using namespace std;
#define ll long long

ll n, ans;

void calc(ll x = 0, int idx = 0){
    //base case
    if(x > n) return;
    if(x == n){
        ans = idx;
        return;
    }
    //transition
    calc(x*10+4, 2*idx+1);
    calc(x*10+7, 2*idx+2);
}

int main(){
    cin >> n;
    calc();
    cout << ans << '\n';
    return 0;
}
