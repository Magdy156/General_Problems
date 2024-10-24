#include <iostream>
using namespace  std;

int main(){
    int q, n, op, x;

    cin >> q >> n;

    while (q--){
        cin >> op;

        if (op == 1){
            cin >> x;
            n |= x;
        }
        else if (op == 2)
        {
            cin >> x;
            n &= x;
        }
        else if (op == 3)
        {
            cin >> x;
            n ^= x;
        }
        else {
            n= ~n;
        }
        cout << n << endl;
    }
    return 0;
}
