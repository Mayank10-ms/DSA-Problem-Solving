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
    TreeNode* solve(string& s, int& i, int depth) {
        int j = i, d = 0;

        while (j < s.size() && s[j] == '-') {
            d++;
            j++;
        }

        if (d != depth)
            return nullptr;

        int val = 0;
        while (j < s.size() && isdigit(s[j])) {
            val = val * 10 + s[j] - '0';
            j++;
        }

        i = j;

        TreeNode* root = new TreeNode(val);

        root->left = solve(s, i, depth + 1);
        root->right = solve(s, i, depth + 1);

        return root;
    }

    TreeNode* recoverFromPreorder(string traversal) {
        int i = 0;
        return solve(traversal, i, 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna