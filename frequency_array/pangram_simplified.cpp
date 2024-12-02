#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
    int n;cin >> n;
    int freq[26] = {};
    while(n--){
        char c; cin >> c;
        c = tolower(c);
        int idx = c - 'a';
        freq[idx]++;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] == 0){
        cout << "NO" << '\n';
        return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}
