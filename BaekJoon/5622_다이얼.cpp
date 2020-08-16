#include <iostream>
using namespace std;

int dial(char c) {
    int val = (int)c -65;
    if(val/3 == 0) return 3;
    if(val/3 == 1) return 4;
    if(val/3 == 2) return 5;
    if(val/3 == 3) return 6;
    if(val/3 == 4) return 7;
    if(15<= val && val<=18) return 8;
    if(19<= val && val<=21) return 9;
    if(22<=val && val<=25) return 10;
    return 0;
}
int main() {
    string input;
    Cin >> input;
    int time = 0;
    for(int i=0; i<input.length(); i++) {
        time += dial(input[i]);
    }
    cout<<time;
    return 0;
}
