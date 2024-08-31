//leetcode -110(balanced binary tree)
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
int height (TreeNode* root){
    if(root == nullptr)
    return 0;
    else{
        return max(height(root->left),height(root->right))+1;
    }
}
void inorder(TreeNode* root,bool & ans){
    if(root!=nullptr){
    inorder(root->left,ans);

    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)>1)
    ans=ans && false;
    inorder(root->right,ans);
}
}
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        inorder(root,ans);
        return ans;
    }
};
