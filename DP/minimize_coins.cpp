#include <iostream>
using namespace std;
#include <climits>
#include <vector>

int main(){
    int n, sum; cin >> n >> sum;
    int s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    vector<int> dp(sum + 1, INT_MAX - 1);
    dp[0] = 0;
    for(int i = 1; i<=sum; i++){
        for(int it:s){
            if(i - it >= 0) dp[i] = min(dp[i], dp[i-it] + 1);
        }
    }
    if(dp[sum] == INT_MAX - 1) dp[sum] = -1;
    cout << dp[sum];
    return 0;
}
