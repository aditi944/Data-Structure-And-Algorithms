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
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        
        return abs(height(root->left)-height(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right) ;
       
	   // if(!isBalanced(root->left) || !isBalanced(root->right)) return false;
       // if(abs(height(root->left)-height(root->right))>1) return false;
       // else return true;
    }
    
    int height(TreeNode* root)
    {
        if(root==nullptr) return 0;
         
        return max(height(root->left),height(root->right))+1;;
    }
        
    
};
