/*BFS_Breadth-First-Search*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj;


void printQueue(queue<int> pq) {
	//vector<int> temp;
	int size = pq.size();
	cout << "q = {";
	for (size_t i = 0; i < size; ++i) {
		cout << pq.front() << ", ";
		pq.pop();
	}
	cout << "}" << endl;
}
void printOrder(vector<int> po) {
	cout << "order = {";
	for (size_t i = 0; i < po.size(); ++i) {
		cout << po.at(i) << ", ";
	}
	cout << "}" << endl;
}
void printDiscovered(vector<bool> dp) {
	cout << "discovered = {";
	for (size_t i = 0; i < dp.size(); ++i) {
		if (dp.at(i)) cout << "T, ";
		else cout << "-, ";
	}
	cout << "}" << endl;
}

vector<int> bfs(int start) {
	queue<int> q;
	vector<bool> discovered(adj.size(), false);
	vector<int> order;
	discovered[start] = true;
	printDiscovered(discovered);
	q.push(start);
	printQueue(q);
	cout << endl;
	while (!q.empty()) {
		int here = q.front();
		cout << "here = q.front :" << here << endl;
		q.pop();
		printQueue(q);
		order.push_back(here);
		printOrder(order);
		cout << endl;
		for (size_t i = 0; i < adj[here].size(); ++i) {
			int there = adj[here][i];
			if (!discovered[there]) {
				cout << "there = " << there << endl;
				q.push(there);
				printQueue(q);
				discovered[there] = true;
				printDiscovered(discovered);
				cout << endl;
			}
		}
	}
	return order;
}

int main() {
	adj.resize(8);
	int edge;
	cout << "간선의 개수를 입력하세요 : ";
	cin >> edge;
	cout << "각 간선의 두 정점을 입력하세요(ex.a b) " << endl;
	for (int i = 0; i < edge; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<int> vv = bfs(0);
	printOrder(vv);

}
