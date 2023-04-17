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
    TreeNode* replaceValueInTree(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        root->val=0;
        
        while(!q.empty()){
            
            int n=q.size();
            vector<TreeNode*> vec;
            int sm=0;
            
            while(n--){
                
                TreeNode* cur=q.front();
                vec.push_back(cur);
                q.pop();
                
                if(cur->left){
                    q.push(cur->left);
                    sm += cur->left->val;
                }
                
                if(cur->right){
                    q.push(cur->right);
                    sm += cur->right->val;
                }
                
            }
            
            for(auto cur: vec){
                int temp=sm;
                if(cur->left){
                    temp -= cur->left->val;
                }
                if(cur->right){
                    temp -= cur->right->val;
                }
                
                if(cur->left){
                    cur->left->val=temp;
                }
                if(cur->right){
                    cur->right->val=temp;
                }
                
                
            }
            
        }
        return root;
    }
};