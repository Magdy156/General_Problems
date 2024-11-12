#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){

    string s; cin >> s;
    stack<char> st;

    for (auto c:s){
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                cout << "no" << '\n';
                return 0;
            }
            else if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (c == ']' && st.top() == '[')
            {
                st.pop();
            }
            else if (c == '}' && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                cout << "no\n";
                return 0;
            }
        }
    }

    if (st.empty())
    {
        cout << "yes"<< '\n';
    }
    else
    {
        cout << "no" << '\n';
    }

    return 0;
}
