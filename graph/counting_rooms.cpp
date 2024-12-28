#include <iostream>
using namespace std;
const int N = 1e3+5;
bool vis[N][N];
int n, m, ans;
char arr[N][N];

bool valid(int x, int y){
    return x>=0 && x<n && y>=0 && y<m && !vis[x][y] && arr[x][y]=='.';
}

void dfs(int x, int y){
    vis[x][y] = 1;
    if(valid(x + 1, y)) dfs(x + 1, y);
    if(valid(x - 1, y)) dfs(x - 1, y);
    if(valid(x, y + 1)) dfs(x, y + 1);
    if(valid(x, y - 1)) dfs(x, y - 1);
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) if(valid(i, j)) ans++, dfs(i, j);
    }
    cout << ans << '\n';
    return 0;
}
