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
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        return max(lh,rh)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        
        bool lb = isBalanced(root->left);
        bool rb = isBalanced(root->right);
        
        
        bool bh = abs(height(root->left)-height(root->right))<=1;
        
        if(lb and rb and bh)
            return true;
        else
            return false;
    }
};