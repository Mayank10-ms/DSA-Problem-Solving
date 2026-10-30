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
  int height(TreeNode* root){
    if(root==nullptr) return 0;

    int left = height(root->left);
    int right = height(root->right);

    return 1+max(left,right);
  }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;

        int lhight = height(root->left);
        int rhight = height(root->right);

        int ldia = diameterOfBinaryTree(root->left);
        int rdia = diameterOfBinaryTree(root->right);

        return max({lhight+rhight,ldia,rdia});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna