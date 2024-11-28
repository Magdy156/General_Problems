#include <iostream>
using namespace std;
#include <map>
#include <algorithm>
#include <string>
#include <set>


int main() {
    int n; cin >> n;
    set<string> roots;
    while(n--){
        string s; cin >> s;
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        roots.insert(s);
    }
    cout << roots.size();
    return 0;
}
