#include <iostream>
using namespace std;
#include <algorithm>


int main(){
    int n; cin >> n;
    int prices[n];
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    sort(prices, prices + n);
    int q; cin >> q;
    while(q--){
        int m; cin >> m;
        if(m < prices[0]){
            cout << 0 << '\n';
            continue;
        }
        int ans = 0;
        int l = 0, r = n-1, mid;
        while(l <= r){
            mid = (l + r)/2;
            if(prices[mid] <= m){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}