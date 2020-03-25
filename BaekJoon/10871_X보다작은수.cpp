//10871_X보다 작은 수 
/* 
전체 아이디어 
- 수열의 원소를 받을 때마다 X와의 대소관계 비교 후 
  작은 경우 해당 원소 바로 출력
*/

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin>>n>>x;
    for(int i=0; i<n; ++i) {
        int k;
        cin>>k;
        if(k<x) cout<< k<<" ";
    }
    return 0;
}