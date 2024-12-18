#include <iostream>
using namespace std;
#include <set>
#define ll long long
int n; ll arr[20]; set<ll> ans;
void calc(int i, ll sum){
    // base case
    if(i == n){
        ans.insert(sum);
        return;
    }
    //transition
    calc(i + 1, sum); // not adding the number
    calc(i + 1, sum + arr[i]); // adding the number
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    calc(0, 0);
    cout << ans.size() - 1 << '\n'; // -1 to remove the empty set 
    return 0;
}
