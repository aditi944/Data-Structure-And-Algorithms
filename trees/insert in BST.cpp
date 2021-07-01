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
        
        
        TreeNode* temp = new TreeNode(val) ; // create node 
        if(root == NULL) // if tree is empty then return above node
        {
            return temp ;
        }
        if(root->val > val) //insert in left subtree
        {
            if(root->left == NULL )
            {
              root->left = temp ;
                return root ;
            }
            else 
            {
                root->left = insertIntoBST(root->left , val) ;
                return root ;
            }
        }
         else // insert in right subtree
        {
            if(root->right == NULL )
            {
              root->right = temp ;
                return root ;
            }
            else 
            {
                root->right = insertIntoBST(root->right , val) ;
                return root ;
            }
        }
        
            
          
    }
    
};