#include <iostream>
using namespace std;

bool isUnique_brute(const string &str) {
    for(int i=0; i<str.length()-1; ++i) {
        for(int j=i+1; j<str.length(); ++j) {
            if(str[i]==str[j]) {
                cout<<"character at index "<<i<<"(="<<str[i]<<") is same as ";
                cout<<"character at index "<<j<<"(="<<str[j]<<")"<<endl;
                return false;
            }
        }
    }
    return true;
}

int main() {
    cout<<"<isUnique :: brute force>"<<endl;
    string words[3] = {"apple", "mango", "kiwi"};
    for(auto word : words) {
        cout<<"input : "<<word<<endl;
        cout<<"result : ";
        if(isUnique_brute(word)) cout<<"duplication doesn't exist"<<endl;
        else cout<<"duplication exists"<<endl;
        cout<<endl;
    }
    return 0;
}