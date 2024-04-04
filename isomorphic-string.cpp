/*Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 */

// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Create two unordered maps to store the indices of characters in each string
        unordered_map<char, vector<int>> m1;
        unordered_map<char, vector<int>> m2;
        
        // Iterate through each character of the strings s and t
        for(int i = 0; i < s.length(); i++) {
            // Store the index of each character of s in m1 and t in m2
            m1[s[i]].push_back(i);
            m2[t[i]].push_back(i);
            
            // Check if the indices of the current characters in s and t are different
            if(m1[s[i]] != m2[t[i]])
                return false;
        }
        
        // If the loop completes without returning false, return true
        return true;
    }
};
