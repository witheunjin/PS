#include <iostream>
using namespace std;

int main(void) {
    string word;
    cin>>word;
    vector<int> result;
    result = vector<int>(26,-1);
    for(int i=0;i<word.size();++i) {
        int pos = (int)word[i]-97;
        if(result[pos]==-1) result[pos]=i;
    }
    for(int i=0; i<26;++i) {
        cout<<result[i]<<' ';
    }
    return 0;
}