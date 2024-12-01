#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
    string s; cin >> s;
    int n = s.size();
    int freq[26] = {};

    for(int i = 0; i < n; i++){
        int idx = s[i] - 'a';
        freq[idx]++;
    }

    for (int j = 0; j < 26; j++){
        if (freq[j] == 0) continue;
        char c = j + 'a';
        cout << c << " : " << freq[j] << '\n';
    }
    return 0;
}
