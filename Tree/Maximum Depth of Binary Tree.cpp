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
int ma(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    
    int left=ma(root->left);
    int right=ma(root->right);
    int m=1+max(left,right);
    return m;
}
    int maxDepth(TreeNode* root) {
       return ma(root);
    }
};