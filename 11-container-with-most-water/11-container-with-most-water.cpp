class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        int ma = INT_MIN;
        while (i < j) {
            ma = max(ma, min(height[i], height[j])*(j-i));
            if (height[i] > height[j]) j--;
            else i++;
        }
        return ma;
    }
};