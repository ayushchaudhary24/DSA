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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        
        queue <TreeNode*> q;

        q.push(root);
        int j =0;
        while(!q.empty()){
            if(root==NULL) return result;
            int n = q.size();
           
            vector<int> ans(n);
            for(int i=0; i<n; i++){
                
                TreeNode* curr = q.front();
                q.pop();
          
                if(j%2==0) ans[i] = curr->val;
                else ans[n-1-i] = curr->val;

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
            }
            
            result.push_back(ans);
           
            j++;
        }
        return result;
    }
};