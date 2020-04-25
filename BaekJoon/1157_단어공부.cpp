#include <iostream>
#include <vector>
using namespace std;

int main() {
    string input;
    cin>>input;
    int max = 0;
    int temp = 0;
    int temp2=0;
    vector<int> every(26,0);
    for(int i=0; i<input.size(); ++i) {
        int each = input[i];
        if(97<=each && each<=122) each-=32;
        each-=65;
        ++every[each];
        if(max<every[each]) {
            max = every[each];
            temp = each;
        }
        else if(max == every[each]&&temp!=each){
            temp2 = max;
        }
    }
    
    if(temp2==max) cout<<'?'<<endl;
    else cout<<(char)(temp+65)<<endl;
    return 0;
}