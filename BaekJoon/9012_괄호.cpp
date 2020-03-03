#include <iostream>
#include <stack> 
#include <vector>
using namespace std;

vector<string> str;

void isVps(vector<string> para) {
	for (size_t i = 0; i < para.size(); ++i) {
		stack<char> s;
		size_t j = 0;
		for (j = 0; j < para[i].size(); ++j) {
			if (para[i][j]=='(') {
				s.push(para[i][j]);
			}
			else if(para[i][j]==')'){
				if (!s.empty())
				{
					s.pop();
				}
				else { 
					--j;
					break;
				}
			}
		}
		if (j == para[i].size() && s.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		str.push_back(input);
	}
	isVps(str);
	return 0;
}