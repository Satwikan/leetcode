class Solution {
public:
    // O(n), space: O(1)
    int minCostClimbingStairs(vector<int>& cost) {
        int m1 = cost[0], m2 = cost[1];
        for (int i = 2; i < cost.size(); i++) {
            int t = m2;
            m2 = cost[i] + min(m2, m1);
            m1 = t;
        }
        return min(m1, m2);
    }
};