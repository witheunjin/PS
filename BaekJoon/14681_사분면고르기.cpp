#include <iostream>
using namespace std;

int quadrant(int x, int y) {
    if(x>0 && y>0) return 1;
    if(x<0 && y>0) return 2;
    if(x<0 && y<0) return 3;
    return 4;
}

int main() {
    int x; cin>>x;
    int y; cin>>y;
    cout<<quadrant(x,y);
    return 0;
}