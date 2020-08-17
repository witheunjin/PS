#include <iostream>
using namespace std;

int main() {
    string input;
    cin>>input;
    int cnt = 0;
    for(int i=0; i<input.length(); ++i) {
        if(input[i] == 'a') cnt++;
        else if(input[i] == 'e') cnt++;
        else if(input[i] == 'i') cnt++;
        else if(input[i] == 'o') cnt++;
        else if(input[i] == 'u') cnt++;
    }
    cout<<cnt;
    return 0;
}