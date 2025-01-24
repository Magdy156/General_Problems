#include <iostream>
using namespace std;
#include <vector>
const int N = 2e5+5;
int n, m, ans;
bool vis[N], cat[N];
vector<int>adj[N];
void dfs(int node, int cats){
    vis[node] = 1;
    if (cats > m) return;
    if(!cat[node]) cats = 0;
    bool leaf = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it, cats + cat[it]);
            leaf = 0;
        }
    }
    ans += leaf;
}


int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> cat[i];
    for(int i = 1; i < n; i++){ // connections n - 1 because it's a tree
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, cat[1]); // root = 1;
    cout << ans;
    return 0;
}
