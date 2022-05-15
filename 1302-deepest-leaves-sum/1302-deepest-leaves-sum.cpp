/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> s;
        s.push(root);
        while (!s.empty()) {
            int sz = s.size();
            bool deepest = true;
            int sum = 0;
            while (sz > 0){
                TreeNode* node = s.front(); s.pop();
                cout << node->val << " ";
                sum += node->val;
                if (node->left) {
                    s.push(node->left);
                    deepest = false;
                }
                if (node->right) {
                    s.push(node->right);
                    deepest = false;
                }
                sz--;
            }
            cout << endl;
            if (deepest) return sum;
        }
        return 0;
    }
};