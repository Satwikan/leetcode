class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size()<1) return "";
        int maxStart = 0, maxEnd = 0;
        for (int i = 0; i < s.size(); i++){
            int l1 = expandAroundCenter(s, i, i);
            int l2 = expandAroundCenter(s, i, i+1);
            int len = max(l1, l2);
            if (len > maxEnd - maxStart){
                maxStart = i - (len -1) / 2;
                maxEnd = i + len / 2;
            }
        }
        return s.substr(maxStart, maxEnd - maxStart + 1);
    }
    int expandAroundCenter(string s, int left, int right){
        int l = left, r = right;
        while (l>=0 && r<s.size() && s[l] == s[r]){
            l--;
            r++;
        }
        return r - l - 1;
    }
};