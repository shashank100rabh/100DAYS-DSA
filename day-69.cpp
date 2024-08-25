//leetcode -100(SAME TREE)
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
void preorder(TreeNode* node , vector<int> &ans){
    if(node != nullptr){
        ans.push_back(node->val);
        preorder(node->left,ans);
         preorder(node->right,ans);
    }
    else{
         //ans.push_back(NULL);
        ans.push_back(10000);
    }
}

void inorder(TreeNode* node , vector<int> &ans){
    if(node != nullptr){
      
        inorder(node->left,ans);
         ans.push_back(node->val);
         inorder(node->right,ans);
    }
    else{
         //ans.push_back(NULL);
        ans.push_back(10000);
    }
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>ans1,ans2,inans1,inans2;
        
       preorder(p,ans1);
       preorder(q,ans2);
       if(ans1==ans2 && inans1==inans2){
        return true;
       }
       else{

        return false;
       }
       return 0;
        
    }
};

//******************************************************************************************************************************* another solution**************************************************************************//
bool issametree(treeNode* p, Treenode* q){
  if (p==NULL && q==NULL) return true;
     if (p==NULL || q==NULL) return true;

  return (p->val == q->val && issametree( p->left , q->left)&& issametree(p->right,q->right) );
}

