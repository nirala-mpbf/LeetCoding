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
    
    vector<int> v;
    void dfs(TreeNode* root){
        if(root==NULL)
            return;
        
        dfs(root->left);
        dfs(root->right);
        
        v.push_back(root->val);
        
    }
    
    int minDiffInBST(TreeNode* root) {
        
        dfs(root);
        sort(begin(v) , end(v));
        
        int mn=INT_MAX;
        for(int i=0; i<v.size()-1; i++){
            mn=min(mn, abs(v[i]-v[i+1]));
        }
        return mn;
    }
};