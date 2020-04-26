#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    vector<int> v;
    int input = 0;
    for(int i=0;i<n;++i) {
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i) {
        cout<<v[i]<<endl;
    }
    return 0;
}