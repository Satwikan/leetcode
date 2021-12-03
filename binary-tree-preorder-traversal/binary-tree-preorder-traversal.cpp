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
     vector<int> preorderTraversal(TreeNode* root) {

		vector<int> v;

		stack<TreeNode *> st;
		TreeNode *p=root;


		while(!st.empty() || p!=NULL){

			if(p!=NULL){
				st.push(p);
				v.push_back(p->val);
				p=p->left;
			}

			else{
				p=st.top();
				st.pop();
				p=p->right;
			}
		}

		return v;
	}
};