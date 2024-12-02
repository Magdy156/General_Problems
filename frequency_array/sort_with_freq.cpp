#include <iostream>
using namespace std;


int main(){
    int N; cin >> N;
    int freq[26] = {};
    while(N--){
        char c; cin >> c;
        int idx = c - 'a';
        freq[idx]++;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i]){
            for(int j = 0; j < freq[i]; j++){
                cout << char('a' + i);
            }
        }
    }
    return 0;
}
