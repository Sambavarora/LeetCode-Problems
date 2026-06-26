/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
 bool Path(TreeNode*root,TreeNode*target,vector<TreeNode*>&path){
    if(root==NULL){
        return false;
    }
    path.push_back(root);
    if(root==target){
        return true;
    }
    if(Path(root->left,target,path)||Path(root->right,target,path)){
        return true;
    }
    path.pop_back();
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>pathp;
        vector<TreeNode*>pathq;
        Path(root,p,pathp);
        Path(root,q,pathq);
        TreeNode*ans=NULL;
        
        int n=min(pathp.size(),pathq.size());
        for(int i=0;i<n;i++){
            if(pathp[i]==pathq[i]){
                ans=pathp[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};