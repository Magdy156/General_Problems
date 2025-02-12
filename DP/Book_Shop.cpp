#include <iostream>
using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int dp[100005] = {};
    int prices[n], pages[n];
    for(int i = 0; i < n; i++) cin >> prices[i];
    for(int i = 0; i < n; i++) cin >> pages[i];
    for(int i = 0; i < n; i++){
        for(int j = x; j >= 1; j--){
            if(j >= prices[i]) dp[j] = max(dp[j], dp[j-prices[i]] + pages[i]);
        }
    }
    cout << dp[x];
    return 0;
}
