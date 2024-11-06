#include <iostream>
using namespace std;

bool getBit(int n, int idx){
    return (n>>idx) & 1;
}

int main() {
    int n, ans = 0;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) cin >> s[i];

    for (int mask = 0; mask < (1 << n); mask++){
        int even = 0, odd = 0; 
        for (int i = 0; i < n; i++){
            if (getBit(mask, i) == 1){
                if ((s[i]&1) == 1) odd++;
                else even++; 
            }
        }
        if (even > odd) ans++;
    }
    cout << ans;
    return 0;
}
