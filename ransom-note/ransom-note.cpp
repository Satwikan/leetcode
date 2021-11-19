class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> umap;
        for (int i = 0; i < ransomNote.size(); i++) {
            if(umap.find(ransomNote[i]) == umap.end()) umap[ransomNote[i]] = 1;
            else umap[ransomNote[i]] += 1;
        }
        unordered_map <char, int> umap2;
        for (int i = 0; i < magazine.size(); i++) {
            if(umap2.find(magazine[i]) == umap2.end()) umap2[magazine[i]] = 1;
            else umap2[magazine[i]] += 1;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            if((umap2.find(ransomNote[i]) == umap2.end()) || umap2[ransomNote[i]] < umap[ransomNote[i]]) return false;
        }
        return true;
    }
};