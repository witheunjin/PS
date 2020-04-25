#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int count = 0;

void dfs(int here) {
    visited[here] = true;
    for(int i=0; i<adj[here].size(); ++i) {
        int there = adj[here][i];
        if(!visited[there]){
            ++count;
            dfs(there);
        }
    }
}
int main(void) {
    int computer = 0;
    int pair = 0;
    cin>>computer;
    cin>>pair;
    adj.resize(computer);
    visited.resize(computer);
    for(int i=0;i<pair;++i) {
        int start=0;
        int end=0;
        cin>>start>>end;
        --start; --end;
        adj[start].push_back(end);
        adj[end].push_back(start);
    }
    dfs(0);
    cout<<count;
    return 0;
}