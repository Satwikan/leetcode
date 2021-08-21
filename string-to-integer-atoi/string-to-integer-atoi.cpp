class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        bool positive = 1;
        while(i < s.size()){
            if (s[i] == ' '){
                i++;
                continue;
            }
            break;
        }
        if (s[i] == '-') {
            positive = 0;
            i++;
        } else if (s[i] == '+') {
            i++;
        }
        string ans = "";
        for(; i < s.size(); i++){
            char c = s[i];
            if (isdigit(c)){
                ans += c;
                // cout << "c: " << c << "\n";
            }else break;
        }
        if (ans.size() < 1) return 0;
        // if (ans.size() > 9){
        //     if (positive) return INT_MAX;
        //     return INT_MIN;
        // }
        int as = 0;
        try {
            int as = stoi(ans);
            if (!positive) as = -1*as;
            cout << "ans: " << as << "\n";
            return as;
        } catch(exception e) {
            if (positive) return INT_MAX;
            return INT_MIN;
        }
    }
};