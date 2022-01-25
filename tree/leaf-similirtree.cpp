class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1;
        vector<int> r2;
        traveltree(root1,r1);
        traveltree(root2,r2);
        return r1==r2;
        
    }
private:
    void traveltree(TreeNode* root,vector<int>& ans){
        if(!root) return;
        if(!root->left &&!root->right){
            ans.push_back(root->val);
        }
        traveltree(root->left,ans);
        traveltree(root->right,ans);
    }
};