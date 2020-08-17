#include <iostream>
using namespace std;

int main() {
    string input;
    cin>>input;
    int cnt=0;
    for(int i=0; i<input.length(); ++i) {
        cout<<"now : "<<input[i]<<endl;
        if(input[i] == 'c' && input[i+1] == '=') {i++; cnt++;}
        else if(input[i] == 'c' && input[i+1]=='-') {i++; cnt++;}
        else if(input[i]=='d' && input[i+1]=='z' && input[i+2]=='=') {i+=2; cnt++;}
        else if(input[i]=='d' && input[i+1]=='-'){ i++; cnt++;}
        else if(input[i]=='l' && input[i+1]=='j') { i++; cnt++;}
        else if(input[i]=='n'&& input[i+1]=='j'){ i++; cnt++;}
        else if(input[i]=='s' && input[i+1]=='='){ i++; cnt++;}
        else if(input[i]=='z' && input[i+1]=='='){ i++; cnt++;}
        else cnt++;
    }
    cout<<cnt;
    return 0;
}