class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        int memo[m+1][n+1];
        for (int i = 0; i < m+1; i++) {
            for (int j = 0; j < n+1; j++) {
                if (i == 0 || j == 0) memo[i][j] = 0;
                else if (word1[i-1] == word2[j-1]) memo[i][j] = 1 + memo[i-1][j-1];
                else memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
            }
        }
        // cout << "   " << word2 << endl;
        // for (int i = 0; i < m+1; i++) {
        //     if (i != 0) cout << word1[i-1] << " ";
        //     else cout << "  ";
        //     for (int j = 0; j < n+1; j++) {
        //         cout << memo[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        return word1.size() + word2.size() - 2*memo[m][n];
        // return 2;
    }
};