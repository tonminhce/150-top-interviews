class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0; // Initialize left pointer to the beginning of the string
        int j = s.length() - 1; // Initialize right pointer to the end of the string
        
        // Iterate until left pointer is less than right pointer
        while (i < j) {
            // Move the left pointer until it points to an alphanumeric character
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            // Move the right pointer until it points to an alphanumeric character
            while (i < j && !isalnum(s[j])) {
                j--;
            }
            // If characters at i and j are not equal (ignoring case), return false
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            // Move the pointers inward
            i++;
            j--;
        }
        // If the loop completes, all characters were matching, so return true
        return true;
    }   
};
// Time complexity: O(n)
// Space complexity: O(1)