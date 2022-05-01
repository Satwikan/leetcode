class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = 0;
        while (i < s.size()) {
            if (s[i] == '#' && i == 0) {
                s = s.substr(1, s.size()-1);
            } else if (s[i] == '#') {
                s = s.substr(0, i-1) + s.substr(i+1, s.size()-i-1);
                i--;
            } else {
                i++;
            }
        }
        i = 0;
        while (i < t.size()) {
            if (t[i] == '#' && i == 0) {
                t = t.substr(1, t.size()-1);
            } else if (t[i] == '#') {
                t = t.substr(0, i-1) + t.substr(i+1, t.size()-i-1);
                i--;
            } else {
                i++;
            }
        }
        return (s == t);
    }
};