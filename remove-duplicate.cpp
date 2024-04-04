class Solution {
    public:
    int removeDuplicates(int* nums, int numsSize) {
        int indx = 1; // Initialize the index to track the position where the next unique element will be stored
        
        // Iterate through the array starting from the second element
        for(int i = 1; i < numsSize; i++) {
            // Check if the current element is different from the previous one
            if(nums[i] != nums[i - 1]) {
                // If it's different, store it at the position indicated by indx
                nums[indx] = nums[i];
                // Move indx to the next position for the next unique element
                indx++;
            }
        }
        // Return the length of the modified array, which is the position of indx
        return indx;
    }
}
// Time complexity: O(n)
// Space complexity: O(1)