class Solution {
public:
    int lcs(string& text1, string& text2, int i, int j, int memo[][1001]) {
        if (i >= text1.size() || j >= text2.size()) return 0;
        if (memo[i][j] != -1) return memo[i][j];
        if (text1[i] == text2[j]) memo[i][j] =  1 + lcs(text1, text2, i+1, j+1, memo);
        else memo[i][j] =  max(lcs(text1, text2, i+1, j, memo), lcs(text1, text2, i, j+1, memo));
        return memo[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size();
        int memo[1001][1001];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                memo[i][j] = -1;
        
        int res = lcs(text1, text2, 0, 0, memo);
        return res < 0 ? 0 : res;
    }
};