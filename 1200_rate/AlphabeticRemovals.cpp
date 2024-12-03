#include <iostream>
using namespace std;
#include <string>

int main(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int freq[26] = {};
    // forming the frequency array
    for(int i = 0; i < n; i++){
        int idx = s[i] - 'a';
        freq[idx]++;
    }
    // subtract the k value from the frequency arr
    for(int j = 0; j < 26; j++){
        if (freq[j] > k){
            freq[j] -= k;
            k = 0;
        }else{
            k -= freq[j];
            freq[j] = 0;
        }
    }
    // printing the string from right to left
    bool del[n] = {};
    for(int x = n - 1; x >= 0; x--){
        if(freq[s[x] - 'a']){
            freq[s[x] - 'a']--;
        }else{
            del[x] = 1;
        }
    }
    for(int z = 0; z < n; z++){
        if(!del[z]){
            cout << s[z];
        }
    }
    return 0;
}
