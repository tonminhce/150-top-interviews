// Time complexity: O(n)
// Space complexity: O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths of the two strings are different, they cannot be anagrams
        if (s.size() != t.size()) 
            return false;
        
        // Create two unordered maps to store the frequency of characters in each string
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        
        // Populate the first map with the frequency of characters in string s
        for (int i = 0; i < s.size(); i++) {
            smap[s[i]]++;
        }
        
        // Populate the second map with the frequency of characters in string t
        for (int i = 0; i < t.size(); i++) {
            tmap[t[i]]++;
        }
        
        // Compare the frequency of characters in both maps
        for (int i = 0; i < smap.size(); i++) {
            // If the frequency of any character in string s is different from that in string t, they are not anagrams
            if (smap[i] != tmap[i]) 
                return false;
        }
        
        // If all characters have the same frequency in both strings, they are anagrams
        return true;
    }
};
