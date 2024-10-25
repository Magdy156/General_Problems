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
bool isPowerTwo(int n){
    if (n == 0) return 0;
    else {
        return !(n & (n - 1));
    }
}
int main(){
    int q, n, op, x;
    cin >> n >> q;

    while (q--){
        cin >> op;

        if (op == 1){
            for(int i =0; i < 32; i++){
                if (getBit(n, i) == 0){
                    n = setBit(n, i);
                    break;
                }
            }
            cout << n << endl;
        }
        else if (op == 2){
            for(int i =0; i < 32; i++){
                if (getBit(n, i) == 1){
                    n = resetBit(n, i);
                    break;
                }
            }
            cout << n << endl;
        }
        else if (op == 3){
            if (n == 0){
                n = -1;
            }
            else{
                for (int i = 0; i < 32; i++){
                    if (getBit(n, i) == 1){
                        break;
                    }
                    n = setBit(n, i);
                }
            }
            cout << n << endl;
        }
        else if (op == 4){
            for (int i = 0; i < 32; i++){
                    if (getBit(n, i) == 0){
                        break;
                    }
                    n = resetBit(n, i);
                }
            cout << n << endl;
        }
        else {
            if (isPowerTwo(n) == 1) {
                cout << "is power of two" << endl;
            }
            else {
                cout << "not power of two" << endl;
            }
        }

    }
    return 0;
}