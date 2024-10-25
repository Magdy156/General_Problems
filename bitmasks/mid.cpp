#include <iostream>
using namespace std;

bool getBit(int n, int idx){
    return (n>>idx) & 1;
}
int setBit(int n, int idx){
    return (1<<idx) | n;
}
int resetBit(int n, int idx){
    return ~(1<<idx) & n;
}
int flipBit(int n, int idx){
    return (1<<idx) ^ n;
}
int main(){
    int q, n, op, x;
    cin >> q >> n;

    while (q--){
        cin >> op;

        if (op == 1){
            cin >> x;
            cout << getBit(n, x) << endl;
        }
        else if (op == 2){
            cin >> x;
            n = setBit(n, x);
            cout << n << endl;
        }
        else if (op == 3){
            cin >> x;
            n = resetBit(n, x);
            cout << n << endl;
        }
        else {
            cin >> x;
            n = flipBit(n, x);
            cout << n << endl;
        }
    }
    return 0;
}