#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<int> s;
void match(string para) {
	if (para == "push") {
		int x;
		cin >> x;
		s.push(x);
	}
	else if (para == "pop") {
		if (s.empty()) cout << -1 << endl;
		else { cout << s.top() << endl; s.pop(); }
	}
	else if (para == "size") {
		cout << s.size() << endl;
	}
	else if (para == "empty") {
		if (s.empty()) cout << 1 << endl;
		else cout << 0 << endl;
	}
	else if (para == "top") {
		if (s.empty()) cout << -1 << endl;
		else cout << s.top() << endl;
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