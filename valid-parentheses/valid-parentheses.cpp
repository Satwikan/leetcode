class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if (s[0] == ')' || s[0] == ']' || s[0] == '}') return 0;
        for (char c: s){
            if (c == '(' || c == '[' || c == '{') stk.push(c);
            else if (stk.empty()) return 0;
            else if (c == ')' && stk.top() == '(') stk.pop();
            else if (c == '}' && stk.top() == '{') stk.pop();
            else if (c == ']' && stk.top() == '[') stk.pop();
            else return 0;
        }
        if (!stk.empty()) return 0;
        return 1;
    }
};