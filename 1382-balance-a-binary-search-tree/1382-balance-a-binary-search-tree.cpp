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
    
    void dfs(TreeNode* root, vector<int> &v){
        if(root->left==nullptr and root->right==nullptr){
            v.push_back(root->val);
            return;
        }
        
        v.push_back(root->val);
        
        if(root->left!=nullptr)
            dfs(root->left, v);
      
        if(root->right!=nullptr)
            dfs(root->right, v);
        
    }
    
    TreeNode* buildBalancedBST(vector<int>& v, int st, int en) {
        if(st > en) return nullptr;

        int mid = st + (en - st) / 2;
        TreeNode* node = new TreeNode(v[mid]);
        node->left = buildBalancedBST(v, st, mid - 1);
        node->right = buildBalancedBST(v, mid + 1, en);

        return node;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        dfs(root, v);

        sort(v.begin(), v.end());

        return buildBalancedBST(v, 0, v.size() - 1);
    }
};