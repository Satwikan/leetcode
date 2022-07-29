class Solution {
public:
    // Time Complexity: O(n)
    // Space: O(n)
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string a[numRows];
        int r = 0;
        bool inc = false;
        for(auto c: s) {
            a[r] += c;
            if (r == numRows-1 || r == 0) inc = !inc;
            r = inc ? r+1 : r-1;
        }
        string res = "";
        for (auto c: a) res += c;
        return res;
    }
};