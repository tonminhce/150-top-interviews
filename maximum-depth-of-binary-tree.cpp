/*
    Given root of binary tree, return max depth (# nodes along longest path from root to leaf)

    At every node, max depth is the max depth between its left & right children + 1

    Time: O(n)
    Space: O(n)
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // If the root is NULL, the depth is 0
        if (root == NULL) {
            return 0;
        }
        // Recursively calculate the depth of the left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        // Return the maximum depth of the left and right subtrees, plus 1 for the current node
        return 1 + max(leftDepth, rightDepth);
    }
};


// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if (root == NULL) {
//             return 0;
//         }
//         queue<TreeNode*> q;
//         q.push(root);
//         int result = 0;
//         while (!q.empty()) {
//             int count = q.size();
//             for (int i = 0; i < count; i++) {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 if (node->left != NULL) {
//                     q.push(node->left);
//                 }
//                 if (node->right != NULL) {
//                     q.push(node->right);
//                 }
//             }
//             result++;
//         }
//         return result;
//     }
// };
