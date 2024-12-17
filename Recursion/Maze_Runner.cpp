#include <iostream>
using namespace std;
#include <algorithm>

int n, st1, st2, end1, end2;
bool vis[6][6];
char grid[6][6];
int calc(int x,int y){
    // base case
    if (x<0||y<0||x>n-1||y>n-1||vis[x][y]||grid[x][y]=='#') return 1e6;
    if(x == end1 && y == end2) return 0;
    //transition
    vis[x][y] = 1;
    int right = calc(x + 1, y) + 1;
    int left = calc(x - 1, y) + 1;
    int up = calc(x, y + 1) + 1;
    int down = calc(x, y - 1) + 1;
    vis[x][y] = 0;
    return min({right, left, up, down});
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    cin >>st1>>st2>>end1>>end2;
    st1--,st2--,end1--,end2--; // beacuase of 0 based
    int ans = calc(st1, st2);
    cout << ans;
    return 0;
}
