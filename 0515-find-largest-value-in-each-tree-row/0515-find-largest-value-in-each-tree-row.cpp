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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v;
        q.push(root);
        if(root==NULL) return v;
        while(!q.empty()){
            int n = q.size();
            int val = INT_MIN;
            for(int  i=0; i<n;i++){
                TreeNode* curr = q.front();
                q.pop();
                val = max(val,curr->val); 
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            v.push_back(val);
        }
        return v;
    }
};