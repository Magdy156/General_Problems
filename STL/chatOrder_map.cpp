#include <iostream>
using namespace std;
#include <map>
#include <string>
#include <map>
#include <stack>

int main() {
    stack<string> st;
    int n; cin >> n;
    while (n--){
        string name; cin >> name;
        st.push(name);
    }

    map<string, bool> visited;
    while(!st.empty()){
        string s = st.top();
        st.pop();
        if (visited[s]) continue;
        visited[s] = 1;
        cout << s << '\n';
    }
    return 0;
}
