class Solution {
public:
    string removeDuplicates(string s, int k) {
        if (s.size() < k) return s;
        stack <pair<char, int>> stk;
        for (int i = 0; i < s.size(); i++) {
            if (stk.empty() || stk.top().first != s[i]) {
                cout << s[i] << " " << i << endl;
                stk.push({s[i], 1});
            }
            else {
                auto top = stk.top();
                stk.pop();
                stk.push({top.first, top.second+1});
            }
            if (stk.top().second == k) stk.pop();
        }
        string res = "";
        while (!stk.empty()) {
            auto top = stk.top();
            stk.pop();
            cout << top.first << " " << top.second << endl;
            while (top.second--) {
                res.push_back(top.first);
            }
        }
        cout << res;
            reverse(res.begin(), res.end());
        return res;
    }
};