//9898_시험성적
/*
전체 아이디어 
입력된 점수의 십의 자리수를 ten변수에 저장한 후 
점수대에 따라 해당 성적을 반환하는 함수 grade를 작성
*/

#include <iostream>
using namespace std;

char grade(int score) {
    int ten = score/10; //십의 자리수 구함
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