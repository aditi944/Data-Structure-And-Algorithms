/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
  if(root==NULL){
      return 0;// Your code here
}
else if(root->left==NULL&&root->right==NULL){
    return true;
}
return countLeaves(root->left)+countLeaves(root->right);
}