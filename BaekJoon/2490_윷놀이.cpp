#include <iostream>
using namespace std;

char game(int n) {
    if(n==0) return 'D';
    if(n==1) return 'C';
    if(n==2) return 'B';
    if(n==3) return 'A';
    return 'E';
}
int main() {
    for(int i=0; i<3; ++i) {
        int cnt = 0;
        for(int j=0;j<4;++j) {
            int one=0; 
            cin >> one;
            if(one == 1) ++cnt;
        }
        cout << game(cnt) << endl;
    }
    return 0;
}
