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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) {
            return subRoot == NULL;
        } else {
            return (isSameTree(root, subRoot)  || isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot));
        }
        
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL) {
            return q == NULL && p == NULL;
        }
        if(p->left == NULL && p->right == NULL) {
            return p->val == q->val && q->left == NULL && q->right == NULL;
        }
        if(p->right != NULL && q->right != NULL && p->left != NULL && q->left != NULL) {
            return (p->val == q->val && isSameTree(p->right, q->right)  && isSameTree(p->left, q->left));
        }
        if(p->right != NULL && q->right != NULL) {
            return (p->val == q->val  && isSameTree(p->right, q->right) && p->left == NULL && q->left == NULL);
        }
        if(p->left != NULL && q->left != NULL) {
            return (p->val == q->val  && isSameTree(p->left, q->left) && p->right == NULL && q->right == NULL);
        }
        return false;
        
    }
};