#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int dp[n][n] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char x; cin >> x;
            if(x == '*') dp[i][j] = -1e9;
        }
    }

    if(dp[0][0] == -1e9 || dp[n-1][n-1]){
        cout << 0;
        return 0;
    }

    dp[0][0] = 1;
    for(int i = 1; i < n; i++) if(dp[i][0] == 0 && dp[i-1][0] >= 0) dp[i][0] += dp[i-1][0];
    for(int i = 1; i < n; i++) if(dp[0][i] == 0 && dp[0][i-1] >= 0) dp[0][i] += dp[0][i-1];

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(dp[i][j] == -1e9) continue;
            if(dp[i-1][j] >= 0) dp[i][j] += dp[i-1][j]; 
            if(dp[i][j-1] >= 0) dp[i][j] += dp[i][j-1];
            if(dp[i][j]>=1e9+7) dp[i][j] -= 1e9+7;
        }
    }
    cout << dp[n-1][n-1];
    return 0;
}
