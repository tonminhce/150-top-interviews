class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0; // Initialize a counter for the majority element
        int res = 0; // Initialize the result variable to store the majority element

        // Iterate through each element in the input vector nums
        for (const int& num: nums) {
            if (count == 0) { // If the count is zero, update the result to the current element
                res = num;
            } 
            // If the current element is equal to the result, increment count; otherwise, decrement count
            count += (num == res) ? 1 : -1;
        }

        return res; // Return the majority element
    }
};
// Time complexity: O(n)
// Space complexity: O(1)