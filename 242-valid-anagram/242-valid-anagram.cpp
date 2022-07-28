class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int a[26];
        fill(a, a+26, 0);
        for (auto ch: s)
            a[ch - 'a'] += 1;
        for (auto ch: t)
            a[ch - 'a'] -= 1;
        for (int i = 0; i < 26; i++) {
            // cout << i << " ";
            if (a[i] != 0) return false;
        }
        return true;
    }
};