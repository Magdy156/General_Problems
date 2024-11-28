#include <iostream>
using namespace std;
#include <map>
#include <string>
#include <map>


int main() {
    int n; cin >> n;
    map<string, string> handles;
    while(n--){
        string s1, s2; cin >> s1 >> s2;
        if (handles.find(s1) == handles.end()){
            handles[s2] = s1;
        }
        else{
            handles[s2] = handles[s1];
        }
        handles.erase(s1);
    }
    cout << handles.size() << '\n';
    for (auto [key, val]:handles) cout<< val << ' ' << key << '\n';
    return 0;
}
