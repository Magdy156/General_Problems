#include <iostream>
using namespace std;
const int N = 1e3+5;
bool vis[N][N];
int n, m, ans;
char arr[N][N];

bool valid(int x, int y, char c){
    return x>=0 && x<n && y>=0 && y<m && !vis[x][y] && arr[x][y]==c;
}

void dfs(int x, int y, char c){
    vis[x][y] = 1;
    if(valid(x + 1, y, c)) dfs(x + 1, y, c);
    if(valid(x - 1, y, c)) dfs(x - 1, y, c);
    if(valid(x, y + 1, c)) dfs(x, y + 1, c);
    if(valid(x, y - 1, c)) dfs(x, y - 1, c);
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) if(!vis[i][j]) ans++, dfs(i, j, arr[i][j]);
    }
    cout << ans << '\n';
    return 0;
}
