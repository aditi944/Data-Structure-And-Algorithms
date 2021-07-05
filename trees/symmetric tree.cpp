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


/**
 * Share
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

 

Example 1:


Input: root = [1,2,2,3,4,4,3]
Output: true
 * 
 */
class Solution {
public:
     
    bool go(TreeNode* node1 ,TreeNode* node2)
    {
        if(node1==NULL && node2==NULL)
            return true;
        else if((node1==NULL && node2!=NULL)||(node2==NULL && node1!=NULL))
            return false;
        else if(node1->val!=node2->val)
            return false;
        else
          {
            return go(node1->left,node2->right)&&go(node1->right,node2->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
      return go(root->left,root->right);
    }
};