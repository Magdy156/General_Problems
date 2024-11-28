#include <iostream>
using namespace std;
#include <map>
#include <string>
#include <set>
#include <stack>

int main() {
    stack<string> st;
    int n; cin >> n;
    while (n--){
        string name; cin >> name;
        st.push(name);
    }

    set<string> visited;
    while(!st.empty()){
        string s = st.top();
        st.pop();
        if (visited.find(s) != visited.end()) continue;
        visited.insert(s);
        cout << s << '\n';
    }
    return 0;
}
