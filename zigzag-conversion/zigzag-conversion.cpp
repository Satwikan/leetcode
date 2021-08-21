class Solution {
public:
    string convert(string s, int numRows) {
        // down: 2*(rows -n)
        // up  : 2*(n)
        if (s.size()<1) return "";
        if (numRows==1) return s;
        bool down;
        string output = "";
        for (int i = 0; i < numRows; i++){
            down = 1;
            int j = i;
            while(j < s.size()){
                if (i == 0) down = 1;
                if (i == numRows-1) down = 0;
                output += s[j];
                cout <<j<<" "<<output<<endl;
                if (down)
                    j += 2*(numRows - i - 1);
                else
                    j += 2*(i);
                down = !down;
            }
        }
        cout << output;
        return output;
    }
};