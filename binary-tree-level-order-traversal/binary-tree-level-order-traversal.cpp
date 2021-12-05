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
    vector<vector<int>> levelOrder(TreeNode* root) {
	  /* {} instead fo {{}} */
      if (!root)  return {};
      vector<vector<int>> res;
      queue<TreeNode*> q;
      q.push(root);
      
      int n;
      TreeNode* node;
      while (!q.empty()) {
        n = q.size();
        vector<int> tmp(n, 0);
        for (int i = 0; i < n; ++i) {
          node = q.front(); q.pop();
          tmp[i] = node->val;
          if (node->left) q.push(node->left);
          if (node->right)  q.push(node->right);
        }
        res.push_back(tmp);
      }
      return res;
    }
};