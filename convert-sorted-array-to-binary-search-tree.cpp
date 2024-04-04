class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // Call a helper function to construct the balanced BST
        return constructBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* constructBST(vector<int>& nums, int left, int right) {
        // Base case: if left index exceeds right index, return NULL
        if (left > right) {
            return NULL;
        }
        
        // Calculate the middle index
        int mid = left + (right - left) / 2;
        
        // Create a new TreeNode with the value of the middle element
        TreeNode* root = new TreeNode(nums[mid]);
        
        // Recursively construct the left and right subtrees
        root->left = constructBST(nums, left, mid - 1);
        root->right = constructBST(nums, mid + 1, right);
        
        // Return the root of the constructed tree
        return root;
    }
};
// Time complexity: O(n)
// Space complexity: O(log n)