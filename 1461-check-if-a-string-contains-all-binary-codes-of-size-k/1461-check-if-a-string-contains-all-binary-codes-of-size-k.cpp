class Solution {
public:
    // total string 2^k    
    // Brute force: O(2^k * k * s.size()) space O(1)
    // optimized O(2^k) space O(2^k)
    bool hasAllCodes(string s, int k) {
        if (k > s.size()) return false;
        bool arr[1 << k];
        for (int i = 0; i < (1 << k); i++)
            arr[i] = false;
        for (int i = 0; i <= s.size()-k; i++) {
            arr[stoi(s.substr(i, k), 0, 2)] = true;
            // cout << stoi(s.substr(i, k), 0, 2) << " ";
        }
        for (int i = 0; i < (1 << k); i++)
            if (!arr[i]) return false;
        return true;
    }
};