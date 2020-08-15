#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string input;
  getline(cin, input);
  int blank = 0;
  if(input[0] == ' ') blank --;
  if(input[input.length()-1] == ' ') blank--;
  sort(input.begin(), input.end());
  for(int i=0; i<input.length(); i++) {
    if(input[i] == ' ') blank++;
    else break;
  }
  cout << blank + 1;
  return 0;
} 