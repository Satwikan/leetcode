class Solution {
public:
    string intToRoman(int num) {
        vector<int>arr;
        while(num != 0) {
            arr.push_back(num % 10);
            num = (int)num / 10;
        }
        int i = arr.size() - 1;
        string ans = "";
        while(i > -1){
            if (arr[i] == 0){
                i--;
                continue;
            }
            if (i >= 3){
                ans += 'M';
                arr[i]--;
            } else if (i == 2 and arr[i] >= 5){
                if (arr[i] == 9) {
                    ans += "CM";
                    i--;
                }else{
                    ans += 'D';
                    arr[i] -= 5;
                }
            } else if (i == 2){
                if (arr[i] == 4) {
                    ans += "CD";
                    i--;
                }else{
                    ans += 'C';
                    arr[i]--;
                }
            } else if (i == 1 and arr[i] >= 5){
                if (arr[i] == 9) {
                    ans += "XC";
                    i--;
                }else{
                    ans += 'L';
                    arr[i] -= 5;
                }
            } else if (i == 1){
                if (arr[i] == 4) {
                    ans += "XL";
                    i--;
                }else{
                    ans += 'X';
                    arr[i]--;
                }
            } else if (i == 0 and arr[i] >= 5){
                if (arr[i] == 9) {
                    ans += "IX";
                    i--;
                }else{
                    cout << "here";
                    ans += 'V';
                    arr[i] -= 5;
                }
            } else if (i == 0){
                if (arr[i] == 4) {
                    // cout << "here1";
                    ans += "IV";
                    i--;
                }else{
                    ans += 'I';
                    arr[i]--;
                }
            }
        }
        return ans;
    }
};