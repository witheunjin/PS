#include <iostream>
using namespace std;

char grade(int score) {
    int ten = score/10;
    if(ten == 10 || ten == 9) return 'A';
    if(ten == 8) return 'B';
    if(ten == 7) return 'C';
    if(ten == 6) return 'D';
    return 'F';
}

int main() {
    int score;
    cin>>score;
    cout<<grade(score)<<endl;
    return 0;
}