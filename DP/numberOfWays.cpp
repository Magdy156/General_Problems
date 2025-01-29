#include <iostream>
using namespace std;

int main (){
    int s, e; cin >> s >> e;
    int dp[e+1] = {};
    dp[s] = 1;
    for(int i = s + 1; i <= e; i++){
        if(i-1 >= s) dp[i]+= dp[i-1];
        if(i-2 >= s) dp[i]+= dp[i-2];
        if(i-3 >= s) dp[i]+= dp[i-3];
    }
    cout << dp[e];
    return 0;
}
