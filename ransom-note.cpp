// Time complexity: O(m + n)
// Space complexity: O(m)
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Create a hashmap to store the count of each character in magazine
        unordered_map<char, int> count;
        
        // Count the occurrences of each character in magazine
        for (char ch : magazine) {
            count[ch]++;
        }
        
        // Iterate through each character in ransomNote
        for (char ch : ransomNote) {
            // If the count of the current character in magazine is zero,
            // then it means the character cannot be used to construct ransomNote
            if (count[ch] == 0) {
                return false;
            }
            // Decrease the count of the current character in magazine
            count[ch]--;
        }
        
        // If we reach here, it means ransomNote can be constructed using characters from magazine
        return true;
    }
};