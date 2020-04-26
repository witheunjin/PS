#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N; cin>>N;
    int M; cin>>M;
    vector<int> card;
    int input=0;
    int min = 99999999;
    for(int i=0;i<N;++i) {
        cin>>input;
        card.push_back(input);
        if(min>input) min = input;
    }
    int sum=0;
    int maxSum=0;
    for(int i=0;i<N-2;++i) {
        for(int j=i+1;j<N-1;++j) {
            if(sum==-1) break;
            if(card[i]+card[j]>M) continue;
            if(card[i]+card[j]+min>M) continue;
            if(card[i]+card[j]+min==M) {sum = -1; break;}
            for(int k=j+1;k<N;++k) {
                sum = card[i]+card[j]+card[k];
                if(sum == M) {sum = -1; break;}
                if(sum>M) continue;
                if(sum>maxSum) maxSum=sum;
            }
        }
    }
    if(sum==-1) cout<<M<<endl;
    else cout<<maxSum<<endl;
    return 0;
}