//leetcode-199 (binary tree right side view)
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*>q;
      q.push(root);
        if (root==nullptr) return ans;
        
        while(1){
            int size = q.size();
            if(size==0) return ans;

            int data =0;
            while(size>0){
              TreeNode* temp = q.front();
                q.pop();
                data=(temp->val);
                if(temp->left != nullptr){
                    q.push(temp->left);
                }

             if(temp->right != nullptr){
                    q.push(temp->right);
                }
                size--;
            }
            ans.push_back(data);
        }
        return ans;
    }
};
