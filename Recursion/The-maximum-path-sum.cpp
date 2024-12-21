#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int n, m, arr[10][10];
int calc(int i = 0, int j = 0){
    // base case
    if (i > n - 1 || j > m - 1) return INT_MIN;
    if (i == n-1 && j == m - 1) return arr[i][j];
    // trasition
    int down = calc(i+1, j);
    int right = calc(i, j + 1);
    return arr[i][j] + max(down, right); 
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int ans = calc();
    cout << ans << '\n';
    return 0;
}
