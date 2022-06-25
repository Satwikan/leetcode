class Solution {
public:
    int minDistance(string s1, string s2) {
       int m = s1.size(), n = s2.size();
       int store[m+1][n+1];
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0) store[i][j] = j;
                else if (j == 0) store[i][j] = i;
                else if (s1[i-1] == s2[j-1]) store[i][j] = store[i-1][j-1];
                else {
                    store[i][j] = min(store[i-1][j], store[i][j-1]);
                    store[i][j] = 1 + min(store[i][j], store[i-1][j-1]);
                }
            }
        }
        return store[m][n]; 
    }
};