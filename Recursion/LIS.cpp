#include <iostream>
using namespace std;
int n, arr[20];

int calc(int i = 0, int last = 0){
    // basecase
    if (i == n) return 0;
    //transition
    int leave = calc(i + 1, last);
    int take = 0;
    if (arr[i] > last) take = calc(i + 1, arr[i]) + 1;
    return max(leave, take);
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = calc();
    cout << ans << '\n';
    return 0;
}
