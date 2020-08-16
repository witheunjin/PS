
#include <iostream>
#include <bitset>
using namespace std;

bool group(string str) {
    bitset<26> bits;
    char pin = str[0];
    bits.set(str[0]-97);
    for(int i=1; i<str.length(); i++) {
        int val = str[i] - 97;
        if(pin == str[i]) continue;
        if(pin != str[i] && bits.test(val)) return false;
        else if(pin != str[i] && !bits.test(val)) bits.set(val);
        pin = str[i];
    }
    return true;
}

int main() {
    int n; cin>>n;
    string word;
    int cnt = 0;
    for(int i=0; i<n; ++i) {
        cin >> word;
        if(group(word)) cnt++;
    }
    cout<<cnt;
    return 0;
}
