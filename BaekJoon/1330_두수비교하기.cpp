#include <iostream>
using namespace std;

string compare(int a, int b) {
    if(a>b) return ">";
    if(a<b) return "<";
    return "==";
}
int main() {
    int A;
    int B;
    cin>>A>>B;
    cout<<compare(A,B);
    return 0;
}