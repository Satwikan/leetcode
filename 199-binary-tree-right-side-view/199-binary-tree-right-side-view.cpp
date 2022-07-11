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
    vector<int> rightSideView(TreeNode* root) {
        if (root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res;
        while(!q.empty()) {
            int s = q.size();
            while(s) {
                TreeNode* curr = q.front();q.pop();
                if (s == 1) res.push_back(curr->val);
                if (curr->left != NULL) q.push(curr->left);
                if (curr->right != NULL) q.push(curr->right);
                s--;
            }
        }
        return res;
    }
};