class Solution {
public:
    int strStr(string haystack, string needle) {
        // Check if the length of haystack is less than needle, if so, return -1
        if(haystack.size() < needle.size()) 
            return -1;
        
        // Initialize a variable to track whether a match is found
        int found = 0;
        
        // Loop through the haystack up to the point where it's still possible to match needle
        for(int i = 0; i < haystack.size() - needle.size() + 1; i++) {
            // Check if the current character in haystack matches the first character of needle
            if(haystack[i] == needle[0]) {
                found = 1; // Set found to 1 to indicate a potential match
                // Loop through the characters of needle starting from the second character
                for(int j = 1; j < needle.size(); j++) {
                    // If any character doesn't match, set found to 0 and break out of the loop
                    if(haystack[i + j] != needle[j]) {
                        found = 0;
                        break;
                    }
                }
                // If found is still 1, return the index where the match starts
                if(found == 1) 
                    return i;
            }
        }
        // If no match is found, return -1
        return -1;
    }
};
// Time complexity: O(n * m)
// Space complexity: O(1)