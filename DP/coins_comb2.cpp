#include <iostream>
using namespace std;
#include <climits>
#include <vector>

int main(){
    int n, sum; cin >> n >> sum;
    int s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<int> dp(sum + 1, 0);
    dp[0] = 1;
    for(int it:s){
        for(int i = 1; i<=sum; i++){
            if(i - it >= 0) dp[i] += dp[i-it];
            if(dp[i] >= 1e9+7) dp[i] -= 1e9+7;
        }
    }
    cout << dp[sum];
    return 0;
}
