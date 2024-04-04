class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(); // Get the size of the input vector nums
        int count=0; // Initialize a count variable to keep track of non-val elements
        // Loop through each element in nums
        for(int i=0;i<n;i++) {
            // If the current element is not equal to val
            if(nums[i]!=val) {
                // Swap the current element with the element at position count
                swap(nums[i],nums[count]);
                // Increment count to move to the next position where a non-val element should be placed
                count++;
            }
        }
        // Return the count, which represents the length of the modified array without val
        return count;
    }
};
// O(n) space complexity and O(1) time complexity