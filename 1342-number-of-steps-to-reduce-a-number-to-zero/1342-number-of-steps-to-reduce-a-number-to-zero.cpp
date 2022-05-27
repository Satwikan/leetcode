class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num) {
            if (num%2 == 1) {
                count++;
                num--;
                continue;
            }
            num >>= 1;
            count++;
            // cout << num;
        }
        // cout << (num >> 1);
        return count;
    }
};