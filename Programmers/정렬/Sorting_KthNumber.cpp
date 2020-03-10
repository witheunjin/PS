//정렬_K번째 수
//URL: https://programmers.co.kr/learn/courses/30/lessons/42748

#include <vector>
#include <algorithm>
#include <iostream> 

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	int siz = commands.size();
	for (int i = 0; i < siz; ++i) {
		int start = commands[i][0];
		int end = commands[i][1];
		int k = commands[i][2];
		vector<int> temp;
		temp.clear();
		for (int j = start - 1; j < end; ++j) {
			temp.push_back(array.at(j));
		}
		int size = temp.size();
		sort(temp.begin(), temp.begin()+size);
		answer.push_back(temp.at(k-1));
	}
	return answer;
}

/*
int main() {
	vector<int> arr = { 1,5,2,6,3,7,4 };
	vector<vector<int>> com = { {2,5,3},{4,4,1},{ 1,7,3 } };
	vector<int> a = solution(arr, com);
	int size = a.size();
	for (int i = 0; i < size; ++i) {
		cout << a.at(i) << " ";
	}
}
*/