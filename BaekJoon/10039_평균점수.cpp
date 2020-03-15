#include <iostream>
using namespace std; 

int main() {
    int sum = 0;
    for(int i=0; i<5; ++i) {
        int score=0;
        cin >> score;
        if(score < 40) score = 40;
        sum += score;
    }
    int avg = sum/5;
    cout << avg;
    return 0;
}