//leecode-2236(root equals to sum of children)
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
    bool checkTree(TreeNode* root) {
        if (root == nullptr || (root->left==nullptr||root->right==nullptr)) return 1;
        int left_sum=0;
        int right_sum=0;

        if (root->left != nullptr){
            left_sum=root->left->val;
        }
          if (root->right != nullptr){
            right_sum=root->right->val;
        }

        if(root->val ==(left_sum+right_sum))
        return 1;
        else{
            return 0;
        }
    }
};
