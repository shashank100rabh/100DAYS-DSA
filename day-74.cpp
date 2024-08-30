//leetcode -103(binary tree zigzag level order traversal)
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
         int level=0;
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root==nullptr) return ans;

        while(1){
           
            int size = q.size();
            if (size==0) return ans;
            level++;

            vector<int>data;
            while(size>0){
                TreeNode*temp=q.front();
                q.pop();

                data.push_back(temp->val);
                if(temp->left!=nullptr){
                    q.push(temp->left);
                }
                 if(temp->right!=nullptr){
                    q.push(temp->right);
                }
                size--;
            }
            if(level%2==0){
                reverse(data.begin(),data.end());
               
            }
             ans.push_back(data);
        }
        return ans;
        
    }
};
