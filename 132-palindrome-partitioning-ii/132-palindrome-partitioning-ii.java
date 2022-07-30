class Solution {
    public int minCut(String s) {
    char[] c = s.toCharArray();
    int n = c.length;
    int[] cut = new int[n];
    boolean[][] pal = new boolean[n][n];
    
    for(int i = 0; i < n; i++) {
        cut[i] = i;
        for(int j = 0; j <= i; j++) {
            if(c[j] == c[i] && (j + 1 > i - 1 || pal[j + 1][i - 1])) {
                pal[j][i] = true;  
                cut[i] = j == 0 ? 0 : Math.min(cut[i], cut[j - 1] + 1);
            }
        }
    }
    return cut[n - 1];
}
}