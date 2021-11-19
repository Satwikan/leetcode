class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map <char, int> umap;
        unordered_map <char, int> umap2;
        for (int i = 0; i < s.size(); i++) {
            if(umap.find(s[i]) == umap.end()) umap[s[i]] = 1;
            else umap[s[i]] += 1;
        }
        for (int i = 0; i < t.size(); i++) {
            if(umap2.find(t[i]) == umap2.end()) umap2[t[i]] = 1;
            else umap2[t[i]] += 1;
        }
        for (int i = 0; i < t.size(); i++) {
            if(umap.find(t[i]) == umap.end() || umap[t[i]] != umap2[t[i]]) return false;
        }
        return true;
    }
};