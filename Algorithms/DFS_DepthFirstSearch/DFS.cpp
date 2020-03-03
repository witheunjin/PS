#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
void dfs(int from) {
	cout << endl << "--dfs(" << from << ") is called--" << endl;
	cout << "   so visited " << from <<" will be 'true'" << endl;
	visited[from] = true;
	for (size_t i = 0; i < adj[from].size(); ++i) {
		int to = adj[from][i];
		cout << "   from : "<<from<<"/ to : " << to << endl;
		if (!visited[to]) {
			cout << "   dfs(" << to << ") is called" << endl;
			dfs(to);
		}
	}
}

void dfsAll() {
	visited = vector<bool>(adj.size(), false);
	for (size_t i = 0; i < adj.size(); ++i) {
		if (!visited[i]) {
			cout << endl << "-dfsAll(" << i << ") is called-" << endl;
			dfs(i);
		}
		else {
			cout << "node " << i << " is already visited" << endl;
		}
	}
}

void showAdj(vector<vector<int>> adjacent) {
	for (size_t i = 0; i < adjacent.size(); ++i) {
		for (size_t j = 0; j < adj[i].size(); ++j) {
			if (adjacent[i][j] != NULL)
			{
				cout << i << " -> " << adjacent[i][j] << endl;
			}
		}
	}
}
int main() {
	adj.resize(7);
	visited.resize(7);
	adj[0].push_back(1);
	adj[0].push_back(2);
	adj[1].push_back(3);
	adj[1].push_back(4);
	adj[5].push_back(6);
	showAdj(adj);
	dfsAll();
	return 0;
}