#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
    int n;cin >> n;
    int freq[52] = {};
    while(n--){
        char c; cin >> c;
        int idx;
        if (isupper(c)){
            idx = c - 'A' + 26;
        }
        else{
            idx = c - 'a';
        }
        freq[idx]++;
    }
    for(int i = 0; i < 52; i++){
        if(freq[i] == 0 && i < 26){
            if(freq[i+26] == 0){
            cout << "NO" << '\n';
            return 0;
            }
        }
    }
    cout << "YES" << '\n';
    return 0;
}
