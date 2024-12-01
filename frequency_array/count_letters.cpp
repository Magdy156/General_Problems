#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
    string s; cin >> s;
    int n = s.size();

    sort(s.begin(), s.end());
    for(int i = 0; i < n; i++){
        int j = i + 1, count = 1;
        while(s[i] == s[j] && j < n){
            count++;
            j++;
        }
        cout << s[i] << " : " << count << '\n';
        i = j - 1;
    }
    return 0;
}
