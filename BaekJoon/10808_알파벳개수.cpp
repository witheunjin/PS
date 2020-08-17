#include <iostream>
#include <vector>
using namespace std;

int main() {
    string input;
    cin>>input;
    vector<int> a;
    a = vector<int>(26,0);
    for(int i=0; i<input.length(); ++i) {
        int val = input[i]-97;
        a[val]++;
    }
    for(int i=0; i<a.size(); ++i) {
        cout<<a[i]<<' ';
    }
    return 0;
}