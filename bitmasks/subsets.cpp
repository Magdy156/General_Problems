#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool getBit(int n, int idx){
    return (n>>idx) & 1;
}

int main() {
    vector<vector<int>> ans; int n, s[18];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];

    for (int mask = 0; mask < (1 << n); mask++){
        vector<int> v;
        for (int i = 0; i < n; i++){
            if (getBit(mask, i) == 1){
                v.push_back(s[i]);
            }
        }
        ans.push_back(v);
    }
    sort(ans.begin(), ans.end());

    for (auto v:ans){
        for (auto num:v){
            cout << num << ' ';
        }
        cout << '\n';
    }
    return 0;
}
