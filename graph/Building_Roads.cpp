#include <iostream>
using namespace std;
#include <vector>
const int N = 2e5+5;
int n, m;
bool vis[N];
vector<int>adj[N];

void dfs(int node){
    vis[node] = 1;
    for(auto it:adj[node]) if(!vis[it]) dfs(it);
}


int main(){
    cin >> n >> m;
    while(m--){
        int a,b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> ans;
    for(int i=1; i <=n; i++) if(!vis[i]) ans.push_back(i), dfs(i);
    cout << ans.size() - 1 << '\n';
    for(int i = 1; i < ans.size(); i++) cout << ans[i - 1] << ' ' << ans[i] << '\n';
    return 0;
}
