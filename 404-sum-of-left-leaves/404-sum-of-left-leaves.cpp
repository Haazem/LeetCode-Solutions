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
    int sumOfLeftLeaves(TreeNode* root) {
        	 int ans=0;
	if(!root) return ans;
	sumLeaves(root,ans,0);
	return ans;

    }
    void sumLeaves(TreeNode* root, int & sum, int flag){
     if(root == NULL) return;
     sumLeaves(root->left,sum,1);
     sumLeaves(root->right,sum,0);
     if(flag && root->left == NULL && root->right == NULL) sum+=root->val;
 }
};