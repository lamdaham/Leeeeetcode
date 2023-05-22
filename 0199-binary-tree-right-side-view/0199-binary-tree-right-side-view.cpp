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
        vector<int> output;
        helper(root, output, 1);
        return output;

    }
    
    void helper(TreeNode* root, vector<int> &output, int level) {
        if(root == NULL) {
            return;
        }
        if(output.size() < level) {
            output.push_back(root->val);
        }
        helper(root->right, output, level+1);
        helper(root->left, output, level+1);
    }
};