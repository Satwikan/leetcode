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
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        std::queue<TreeNode*> s;
        s.push(nullptr);
       
        s.push(root);
        int depth = 0;
        while (!s.empty()) {
            TreeNode* cur = s.front();
            s.pop();
            if (!cur) {
                if (s.empty()){
                    break;
                }
                depth++;
                s.push(nullptr);
                continue;
            }
            if (cur->left) {
                s.push(cur->left);
            }
            if (cur->right) {
                s.push(cur->right);
            }
        }
        return depth;
    }
};