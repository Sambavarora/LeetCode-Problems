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
vector<int>ans;
void inorder(TreeNode*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}
void assign(TreeNode*root,vector<int>&ans,int&idx){
    if(root!=NULL){  
    assign(root->left,ans,idx);
    root->val=ans[idx];
    idx++;
    assign(root->right,ans,idx);
    }
}
    TreeNode* bstToGst(TreeNode* root) {
        inorder(root);
        int sum=0;
        for(int i=ans.size()-1;i>=0;i--){
            sum=sum+ans[i];
            ans[i]=sum;
        }
        int idx=0;
        assign(root,ans,idx);
        return root;
    }
};