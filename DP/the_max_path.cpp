#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int s[n + 1][m + 1] = {}; // +1 for 1 based
    for(int i = 1; i <=n; i++) for(int j = 1; j <=m; j++) cin >> s[i][j];
    int dp[n+1][m+1] = {};
    dp[1][1] = s[1][1];
    for(int i = 2; i <= n; i++) dp[i][1] = s[i][1] + dp[i-1][1];
    for(int i = 2; i <= m; i++) dp[1][i] = s[1][i] + dp[1][i - 1];
    for(int i = 2; i <= n; i++) for(int j = 2; j <= m; j++) dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + s[i][j];
    cout << dp[n][m];
    return 0;
}
