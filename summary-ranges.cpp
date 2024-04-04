// Time complexity: O(n)
// Space complexity: O(1)
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        
        // Iterate through the sorted array nums
        for (int i = 0; i < nums.size(); ++i) {
            int start = nums[i]; // Initialize the start of the range
            
            // Keep iterating while the next element is consecutive
            while (i + 1 < nums.size() && nums[i + 1] - nums[i] == 1) {
                ++i; // Move to the next element
            }
            
            // If start and nums[i] are the same, append start as a single element
            if (start == nums[i]) {
                result.push_back(to_string(start));
            } else {
                // Otherwise, append the range "start->nums[i]"
                result.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
        }
        
        return result;
    }
};
