//Question 105 june26
class Solution {
    int dfs(TreeNode* node, int prev) {
        if (node == NULL) {
            return 0;
        }
        
        int count = (node->val >= prev) ? 1 : 0;
        int newMax = max(prev, node->val);
        
        count += dfs(node->left, newMax);
        count += dfs(node->right, newMax);
        
        return count;
    }

public:
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};