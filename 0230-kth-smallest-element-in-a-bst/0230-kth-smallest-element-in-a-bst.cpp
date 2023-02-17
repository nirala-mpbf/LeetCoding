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
    
    set<int> ans;
    void dfs(TreeNode* root){
        if(root==NULL)
            return;
        
        dfs(root->left);
        dfs(root->right);
        
        ans.insert(root->val);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        auto it=ans.begin();
        
        while(--k){
            it++;
        }
        return *it;
    }
};