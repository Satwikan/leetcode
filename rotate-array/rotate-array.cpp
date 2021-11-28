class Solution {
public:
    int gcd(int a, int b) {
        int c;
        while (a != 0) {
            c = a; a = b % a;  b = c;
        }
        return b;
    }

    void rotate(vector<int>& nums, int k) {
        if (k == 0) return;
        int n = nums.size();
        int gcd_nk; // greatest common devisor of n and k
        gcd_nk = gcd(k, n);
        for (int i = 0; i < gcd_nk; i++){
            int carry = nums[i];
            int pos = (i + k) % n;
            
            while (pos > i) {
                int temp = carry;
                carry = nums[pos];
                nums[pos] = temp;
                pos = (pos + k)%n;
            }
            nums[pos] = carry;
        }
    }
};