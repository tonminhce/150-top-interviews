// Time complexity: O(n)
// Space complexity: O(min(n, k))
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Create an unordered_map to store the most recent index of each number
        unordered_map<int, int> number_map;
        
        // Iterate through the elements of the nums vector
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i]; // Current number
            
            // Check if the current number exists in the number_map
            if (number_map.find(num) != number_map.end() && i - number_map[num] <= k) {
                // If the current number has been seen before within distance k, return true
                return true;
            } else {
                // Otherwise, update the index of the current number in the number_map
                number_map[num] = i;
            }
        }
        
        // If no duplicates were found within distance k, return false
        return false;
    }
};
