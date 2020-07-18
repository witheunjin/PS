#include <iostream>
#include <bitset>
using namespace std;

bool isUnique_bitset(const string &str) {
    bitset<256> bits(0);
    for(int i=0; i<str.length(); ++i) {
        int val = str[i];
        if(bits.test(val) > 0) return false;
        bits.set(val);
    }
    return true;
}

int main() {
    cout<<"<isUnique_bitset>"<<endl;
    string words[3] = {"apple", "mango", "kiwi"};
    for(auto word : words) {
        cout<<"input : "<<word<<endl;
        cout<<"result : ";
        if(isUnique_bitset(word)) cout<<"duplication doesn't exist"<<endl;
        else cout<<"duplication exist"<<endl;
        cout<<endl;
    }
    return 0;
}