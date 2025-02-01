#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;
    int dp[n+5] = {};
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        for(int j = 0; j < x; j++){
            dp[x] = max(dp[x], dp[j]+1);
        }
        ans = max(ans, dp[x]);
    }
    cout << ans;
    return 0;
}
