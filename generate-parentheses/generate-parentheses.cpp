class Solution {
public:
    void backtrace(vector<string>& ans, string st, int op, int cl, int n){
        cout << st << op << cl << endl;
        if (op < n) {
            // cout << "here1";
            st = st + '(';
            backtrace(ans, st, op + 1, cl, n);
            st = st.substr(0, st.size() - 1);
        } if (cl < op){
            // cout << "here2";
            st = st + ')';
            backtrace(ans, st, op, cl + 1, n);
            st = st.substr(0, st.size() - 1);
        } if (op == cl && op == n){
            cout << "here3 ";
            ans.push_back(st);
            cout << " - " << ans[0] << endl;
            return;
        }
        cout << "here4";
    }
    vector<string> generateParenthesis(int n) {
        // only add open paranthesis if open < n
        // only add a closing paranthesis if no of closed < open
        // exit if open == closed == n
        vector<string> ans;
        string st = "";
        backtrace(ans, st, 0, 0, n);
        return ans;
    }
};