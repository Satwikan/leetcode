class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int i = 0, j = height.size() - 1;
        while (i < j){
            if (height[i] < height[j]){
                maxArea = max(maxArea, height[i]*(j-i));
                i++;
            }else {
                maxArea = max(maxArea, height[j]*(j-i));
                j--;
            }
        }
        cout << "maxArea: " << maxArea << endl;
        return maxArea;
    }
};