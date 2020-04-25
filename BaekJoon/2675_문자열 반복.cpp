#include <iostream>
#include <vector>
using namespace std;
vector<string> result;
void repeat(int k, int n, const string& str) {
    for(int i=0; i<str.size(); ++i) {
        for(int j=0; j<n; ++j) {
            result[k].push_back(str[i]);
        }
    }
}
int main() {
    int testCase = 0;
    cin>>testCase;
    int repeatNum = 0;
    string input;
    result.resize(testCase);
    for(int i=0; i<testCase; ++i) {
        cin>>repeatNum>>input;
        repeat(i, repeatNum, input);
    }
    for(int i=0; i<testCase; ++i) {
        cout<<result[i]<<endl;
    }
    return 0;
}