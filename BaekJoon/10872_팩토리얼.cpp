#include <iostream>
using namespace std;

int main() {
    int pec = 1;
    int n; 
    cin >> n;
    for(int i=1; i<=n; ++i) pec *= i;
    cout << pec;

    return 0;
}