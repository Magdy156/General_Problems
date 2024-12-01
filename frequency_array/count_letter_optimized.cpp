#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
    char x;
    int freq[26] = {};

    while(cin >> x){
        int idx = x - 'a';
        freq[idx]++;
    }

    for (int j = 0; j < 26; j++){
        if (freq[j] == 0) continue;
        char c = j + 'a';
        cout << c << " : " << freq[j] << '\n';
    }
    return 0;
}
