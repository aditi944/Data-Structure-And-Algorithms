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


/* 
Input: root = [3,1,4,3,null,1,5]
Output: 4
Explanation: Nodes in blue are good.
Root Node (3) is always a good node.
Node 4 -> (3,4) is the maximum value in the path starting from the root.
Node 5 -> (3,4,5) is the maximum value in the path
Node 3 -> (3,1,3) is the maximum value in the path.*/
class Solution {
public:
    int good_nodes;
    int goodNodes(TreeNode* root) {
        preorder(root , INT_MIN);
        return good_nodes;
    }
    void preorder(TreeNode* curr , int greatest_so_far)
    {
        if(curr == NULL)
            return;
        
        if(greatest_so_far <= curr->val)
        {
            greatest_so_far = curr->val;
            good_nodes++;
        }
            
        preorder(curr->left , greatest_so_far);
        preorder(curr->right , greatest_so_far);
    }
};
