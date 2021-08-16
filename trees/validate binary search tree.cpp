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
      bool validate(TreeNode* root, TreeNode* low, TreeNode* high) {
        // Empty trees are valid BSTs.
        if (root == nullptr) {
            return true;
        }

        // The current node's value must be between low and high.
        if ((low != nullptr&& root->val <= low->val) ||
            (high != nullptr && root->val >= high->val)) {
            return false;
        }

        // The left and right subtree must also be valid.
        return validate(root->right, root, high) &&
               validate(root->left, low, root);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }
};
