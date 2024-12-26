#include <iostream>
using namespace std;
#include <vector>
const int N = 1e5+5;
int n, m, ans, color[N];
bool vis[N];
vector<int>adj[N];

void dfs(int node){
    vis[node] = 1;
    if(color[node] >= 5) ans++;
    for(auto it:adj[node]){
        if(!vis[it]) dfs(it);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> color[i];
    while(m--){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    cout << ans << '\n';
    return 0;
}
