class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        /* we either have to do the above for
 the sake of reversing the last word or we could
 check whether we are at the len index
 in addition to the whitespace check in the loop */
        int len = s.length();
        int a = 0;
        int b = 0;
        for(int i = 0; i < len; i++) {
            if(s[i] == ' ') {
                b = i - 1;
                while(a < b) {
                    swap(s[a], s[b]);
                    a++;
                    b--;
                }
                a = i + 1;
            }
        }
        
        s.pop_back();
        return s;
    }
};