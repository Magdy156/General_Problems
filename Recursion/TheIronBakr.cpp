#include <iostream>
using namespace std;
int n;
int calc(int i){
    // base case
    if(i > n + 1) return 0;
    if(i == n + 1) return 1;
    //transition
    int ch1 = calc(i+1);
    int ch2 = calc(i+2);
    int ch3 = calc(i+3);
    return ch1 + ch2 + ch3; 
}

int main(){
    cin >> n;
    int ans = calc(1);
    cout << ans << '\n';
    return 0;
}
