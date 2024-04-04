// Time Complexity is O(N) where n is the size of the target string.
// Space Complexity is O(1)

class Solution {
public:
   bool isSubsequence(string s, string t) {
      int i = 0, j = 0; // Initialize pointers i and j to traverse strings t and s, respectively
      
      // Loop until either all characters of s have been found in t or the end of t is reached
      while (j < s.size() && i < t.size()) {
         // If the current character of s matches the current character of t
         if (s[j] == t[i])
            j++; // Move to the next character in s
         
         i++; // Move to the next character in t
      }
      
      // If all characters of s have been found in t, return true; otherwise, return false
      if (j >= s.size()) 
         return true;
      return false;
   }
};
