#include <iostream>
using namespace std;
#include <climits>
#include <vector>

int main(){
    int n; cin >> n;
    vector<int> dp(n+1, INT_MAX - 1);
    dp[n] = 0;
    for(int i = n; i > 0; i--){
        if(dp[i] == INT_MAX - 1) continue;
        int x = i;
        while(x){
            int dig = x%10;
            x/=10;
            if(dig && i-dig>=0) dp[i-dig] = min(dp[i-dig], dp[i]+1);
        }
    }
    cout << dp[0];
    return 0;
}
