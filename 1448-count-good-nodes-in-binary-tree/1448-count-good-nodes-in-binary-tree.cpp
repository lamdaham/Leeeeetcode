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
    int goodNodes(TreeNode* root) {
        int output = 0;
        helper(root, -10000, output);
        return output;
    }
    
    void helper(TreeNode* root, int parent, int &output) {
        if (root == NULL) {
            return;
        }
        if(root->left == NULL && root->right == NULL) {
            if(root->val >= parent) {
                output++;
                return;
            }
        }
        
        if(root->left == NULL) {
            if(root->val >= parent) {
                output++;
                parent = root->val;
            }
            helper(root->right, parent, output);
        }
        else if(root->right == NULL) {
            if(root->val >= parent) {
                output++;
                parent = root->val;
            }
            helper(root->left, parent, output);
        } else {
            if(root->val >= parent) {
                output++;
                parent = root->val;
            }
            helper(root->right, parent, output);
            helper(root->left, parent, output);
        }
    }
};