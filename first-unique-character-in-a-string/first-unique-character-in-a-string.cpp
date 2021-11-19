class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> umap;
        for (int i = 0; i < s.size(); i++) {
            if(umap.find(s[i]) == umap.end()) umap[s[i]] = 1;
            else umap[s[i]] += 1;
        }
        for (int i = 0; i < s.size(); i++) {
            if(umap[s[i]] == 1) return i;
        }
        return -1;
    }
};