#include <iostream>
using namespace std;

int main() {
    string input;
    cin>>input;
    string output;
    for(int i=0; i<input.length(); ++i) {
        if(65<=(int)input[i] && (int)input[i]<=90) cout<<input[i];
    }
    return 0;
}