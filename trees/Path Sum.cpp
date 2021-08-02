//if path sum eqal to target exists , return true
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        if(root==NULL)
            return false;
        else if(root->left==NULL&&root->right==NULL&&root->val==targetSum)return true;
        else{
          return  hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val);
        
        }
    }
};
