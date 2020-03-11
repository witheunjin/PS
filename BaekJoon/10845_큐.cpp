#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
void match(string para) {
	if (para == "push") {
		int x;
		cin >> x;
		q.push(x);
	}
	else if (para == "pop") {
		if (q.empty()) cout << -1 << endl;
		else { cout << q.front() << endl; q.pop(); }
	}
	else if (para == "size") {
		cout << q.size() << endl;
	}
	else if (para == "empty") {
		if (q.empty()) cout << 1 << endl;
		else cout << 0 << endl;
	}
	else if (para == "front") {
		if (q.empty()) cout << -1 << endl;
		else cout << q.front() << endl;
	}
	else if (para == "back") {
		if (q.empty()) cout << -1 << endl;
		else cout << q.back() << endl;
	}
}

int main() {
	int N;
	cin >> N;
	string command;
	for (int i = 0; i < N; ++i) {
		cin >> command;
		match(command);
	}
	return 0;
}