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
    TreeNode *getSuccessor(TreeNode *cur) {
        cur = cur->right;
        while(cur != NULL && cur->left != NULL) cur = cur->left;
        return cur;
    }

    TreeNode *deleteNode(TreeNode *root, int x) {
        if (root == NULL) return root;
        if (root->val == x) {
            if (root->left == NULL) {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            else {
                TreeNode *succ = getSuccessor(root);
                root->val = succ->val;
                root->right = deleteNode(root->right, succ->val);
            }
        }
        else if (root->val > x)
            root->left = deleteNode(root->left, x);
        else if (root->val < x)
            root ->right = deleteNode(root->right, x);
        return root;
    }
//     TreeNode* deleteNode(TreeNode* root, int key) {
        
//     }
};