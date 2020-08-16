
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string first;
    string second;
    cin>>first>>second;
    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());
    if(stoi(first) > stoi(second)) cout<<first;
    else cout<<second;
    return 0;
}
