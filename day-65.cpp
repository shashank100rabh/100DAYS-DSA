//leetcode-144(binary tree preorder traversal)
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
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int> result;
        if (root == nullptr) {
            return result;
        }

        stack<TreeNode*> nodeStack;
        nodeStack.push(root);

        while (!nodeStack.empty()) {
            TreeNode* node = nodeStack.top();
            nodeStack.pop();
            result.push_back(node->val);

            
            if (node->right != nullptr) {
                nodeStack.push(node->right);
            }
            if (node->left != nullptr) {
                nodeStack.push(node->left);
            }
        }

        return result;
    }

   
      
};
