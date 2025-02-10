#include <iostream>
using namespace std;

int main (){
    int n; cin >> n;
    int dp[n+1] = {};
    dp[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=6; j++){
            if(i-j >= 0){
                dp[i]+= dp[i-j];
                if(dp[i] >= 1e9+7) dp[i] -= 1e9+7;
            }
        }
    }
    cout << dp[n];
    return 0;
}
