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
    void search(TreeNode** root, int x) {
        if (*root == NULL) {
            *root =  new TreeNode(x);
            return;
        }
        if ((*root)->val == x) return;
        if ((*root)->val > x) search(&((*root)->left), x);
        if ((*root)->val < x) search(&((*root)->right), x);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        search(&root, val);
        return root;
    }
};