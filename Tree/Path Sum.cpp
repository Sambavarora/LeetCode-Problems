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
        if(root==NULL){
            return false;
        }
        int remainder=targetSum-root->val;
        if(root->left==NULL&&root->right==NULL){
            return targetSum==root->val;
        }
        bool le=hasPathSum(root->left,remainder);
        bool rt=hasPathSum(root->right,remainder);
        return le||rt;
    }
};