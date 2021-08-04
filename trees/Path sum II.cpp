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
    vector<vector<int>>ans;
    void generate(TreeNode* root,vector<int>& path,int &targetSum,int &sum)
    {
        if(root==NULL)
        {
            return;
        }
        sum=sum+root->val;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            if(sum==targetSum)
            {
                ans.push_back(path);
            }
        }
        generate(root->left,path,targetSum,sum);
        generate(root->right,path,targetSum,sum);
        path.pop_back();
        sum=sum-root->val;
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        int sum=0;
        generate(root,path,targetSum,sum);
        return ans;
    }
};
