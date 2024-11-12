#include <iostream>
using namespace std;
#include <string>
#include <queue>
#include <functional>

int main(){
    int q; cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    while(q--)
    {
        string op; cin >> op;

        if (op == "push"){
            int x; cin >> x;
            pq.push(x);
        }
        else if (op == "pop"){
            pq.pop();
        }
        else{
            cout << pq.top() << '\n';
        }
    }
    return 0;
}
