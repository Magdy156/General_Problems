#include <iostream>
using namespace std;
#include <string>

string guess(int mid){
    cout << mid << endl; // endl to flush
    string s; cin >> s;
    return s;
}
int main(){
    int l = 1, r = 1e6, ans;
    while(l <= r){
        int mid = (l+r)/2;
        string x = guess(mid);
        if(x == ">="){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout <<"! " << ans;
    return 0;
}
