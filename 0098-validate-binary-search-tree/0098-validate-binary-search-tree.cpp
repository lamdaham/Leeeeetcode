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
    bool isValidBST(TreeNode* root) {
        if(root == NULL) {
            return true;
        }
        if(root->right == NULL && root->left == NULL) {
            return true;
        }
        if(root->right == NULL) {
            if (helperMax(root->left) < root->val) {
                return isValidBST(root->left);
            }
        }
        if(root->left == NULL) {
            if(helperMin(root->right) > root->val) {
                return isValidBST(root->right);
            }
        }
        if(helperMin(root->right) > root->val && helperMax(root->left) < root->val) {
            return isValidBST(root->left) && isValidBST(root->right);
        }
        return false;
    }
    
    int helperMin(TreeNode* root) {
        if(root == NULL) {
            return INT_MAX;
        }
        if(root->left == NULL && root->right == NULL) {
            return root->val;
        } 
        if(root->left == NULL) {
            return min(root->val, helperMin(root->right));
        }
        if(root->right == NULL) {
            return min(root->val, helperMin(root->left));
        }
        return min(root->val, min(helperMin(root->right), helperMin(root->left)));
    }
    
    int helperMax(TreeNode* root) {
        if(root == NULL) {
            return INT_MIN;
        }
        if(root->left == NULL && root->right == NULL) {
            return root->val;
        } 
        if(root->left == NULL) {
            return max(root->val, helperMax(root->right));
        }
        if(root->right == NULL) {
            return max(root->val, helperMax(root->left));
        }
        return max(root->val, max(helperMax(root->right), helperMax(root->left)));
    }
};