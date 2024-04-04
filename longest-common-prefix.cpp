class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Initialize an empty string to store the result
        string res = "";
        // Loop through characters of the first string in the vector
        for (int i = 0; i < strs[0].size(); ++i) {
            // Loop through each string in the vector
            for (const string& s : strs) {
                // Check if the current index i is out of range for any string or if the character at index i in any string is different from the character at index i in the first string
                if (i == s.size() || s[i] != strs[0][i]) {
                    // If either condition is true, return the current result (common prefix found so far)
                    return res;
                }
            }
            // If all strings have the same character at index i, append that character to the result
            res += strs[0][i];
        }
        // Return the final result (longest common prefix)
        return res;
    }
};
