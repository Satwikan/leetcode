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
    bool ans =false;
    bool findTarget(TreeNode* root, int k) {
        dfs(root,root, k);
        return ans;
    }
   void dfs(TreeNode* root,TreeNode* r, int k){
        if(root==NULL)
            return ;
     bool isValid=Bsearch(r,root,k-root->val);
       if(isValid)
       {
           ans=true;
           return;
       }
         
          dfs(root->left,r,k);
       dfs(root->right,r, k);
              
    }
    bool Bsearch(TreeNode* root, TreeNode* r,int k){
        if(root==NULL)
            return false;
        if(root->val==k and root!=r)
            return true;
        else if(root->val>k)
            return Bsearch(root->left,r,k);
        else if(root->val<k)
            return Bsearch(root->right,r,k);
    
        return false;
    }
};