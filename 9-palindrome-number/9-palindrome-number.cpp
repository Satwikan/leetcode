class Solution {
public:
    bool check(string& s, int i, int j) {
        if (i >= j) return true;
        return s[i] == s[j] && check(s, i+1, j-1);
    }
    bool isPalindrome(int x) {
        string s = to_string(x);
        return check(s, 0, s.size()-1);
    }
};