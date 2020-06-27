class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<10) return true;
        int i=0;
        string s = to_string(x);
        int length = s.length();
        for(i=0; i<length; ++i) {
            if(s[i] != s[length-i-1]) break;
        }
        if(i == length) return true;
        return false;
    }
};
