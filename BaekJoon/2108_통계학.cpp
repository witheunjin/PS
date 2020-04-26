#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v;
    int input = 0;
    double sum = 0.0;
    int min = 4001;
    int max = -4001;
    for(int i=0;i<N;++i){
        cin>>input; 
        sum+=input; 
        if(min>input) min = input; 
        if(max<input) max = input; 
        v.push_back(input); 
    }
    int mid = (N-1)/2;
    sort(v.begin(),v.end());
    cout<<(round)(sum/N)<<endl;
    cout<<v[mid]<<endl;
    int most = 0;
    int temp = 0;
    int cnt = 0;
    int c = 0;
    for(int i=0;i<N;++i) {
        if(i!=0 && v[i-1]==v[i]) ++cnt;
        else cnt = 1;
        if(most<cnt) {
            most = cnt; 
            temp = i; 
            c=1;
            
        }
        else if(most==cnt && c==1) {
            temp = i;
            ++c;
        }
    }
    cout<<v[temp]<<endl;
    cout<<max-min<<endl;
    return 0;
}