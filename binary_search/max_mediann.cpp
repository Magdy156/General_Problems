#include <iostream>
using namespace std;
#include <algorithm>
#define ll long long
ll n, k, arr[200000];

bool check(int mid){
    ll sum = 0;
    for(int i = n / 2; i < n; i++){
        if(arr[i] < mid) sum += mid - arr[i];  
    }
    return sum <= k;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    ll l = arr[n/2], r = arr[n/2] + k, ans = arr[n/2];
    while(l <= r){
        ll mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
