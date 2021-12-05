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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
            if(nullptr == root)
    {
        return new TreeNode(val);
    }
    
    TreeNode * tmp = root;
    TreeNode * nodetoinsert = tmp;
    while(tmp)
    {
        nodetoinsert = tmp;
        tmp = val > tmp->val ? tmp->right : tmp->left;
    }
    TreeNode * nnode = new TreeNode(val);
    if(val < nodetoinsert->val) nodetoinsert->left = nnode;
    else nodetoinsert->right = nnode;
    return root;
    }
};