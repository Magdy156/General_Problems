#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include <utility>
const int N = 200;
int n, m; vector<int>adj[N]; bool vis[N];

int bfs(int start, int end){
    queue<pair<int, int>>q;
    q.push({start, 0});
    while (!q.empty())
    {
        pair<int, int>p = q.front();
        q.pop();
        int node = p.first;
        int cost = p.second;
        vis[node] = 1;
        if (node == end) return cost;
        for(auto it:adj[node]){
            if(!vis[it]){
                q.push({it, cost + 1});
            }
        }
    }
    
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a,b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << bfs(4, 5);
    return 0;
}
