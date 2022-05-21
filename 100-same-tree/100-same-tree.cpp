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
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == q) return true;
        if ((p == NULL && q != NULL) 
            || (p != NULL && q == NULL) 
            || (p->val != q->val))
            return false;
        bool left = true;
        bool right = true;
        // if (p->left && q->left) 
            left = isSameTree(p->left, q->left);
        // if (p->right && q->right) 
            right = isSameTree(p->right, q->right);
        return left && right;   
    }
};