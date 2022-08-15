class Solution {
public:
    // Time Complexity: O(n)
    int romanToInt(string s) {
        unordered_map<char, int> mp = 
            {{'I',             1},
            {'V',             5},
            {'X',             10},
            {'L',             50},
            {'C',             100},
            {'D',             500},
            {'M',             1000}};
        char prev = s[0];
        int res = 0;
        for (int i = 1; i < s.size(); i++) {
            if (prev != '0' && mp[s[i]] > mp[prev]) {
                res += mp[s[i]] - mp[prev];
                prev = '0';
            } else {
                res += mp[prev];
                prev = s[i];
            }
            
        }
        if (prev != '0') res += mp[prev];;
        return res;
    }
};