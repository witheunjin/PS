#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<string> input;
    input.resize(1);
    int n=0;
    cin>>n;
    cin>>input[0];
    int sum = 0;
    for(int i=0; i<n; ++i) sum += (int)input[0][i] - 48;
    cout<<sum<<endl;
    return 0;
}