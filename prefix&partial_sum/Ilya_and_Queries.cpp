#include <iostream>
using namespace std;
#include <string>

int main(){
    string s; cin >> s;
    int n = s.size();
    s = '*' + s;
    bool f[n + 1] = {};
    for(int i = 1; i <= n; i++){
        if(s[i] == s[i + 1]) f[i] = 1;
    }
    int pre[n + 1] = {};
    for(int j = 1; j <= n; j++){
        pre[j] = pre[j - 1] + f[j];
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << pre[r] - pre[l - 1] - f[r] << '\n'; 
    }
    return 0;
}
