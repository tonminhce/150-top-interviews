// Time complexity: O(n + m)
// Space complexity: O(n + m)
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        // Vector to map each character in the pattern to an integer
        vector<int> pat_map(26, 0);
        
        // Map to store the mapping of words in the string to integers
        unordered_map<string, int> str_map;
        
        int i = 0, n = pattern.size();
        
        // Using istringstream to tokenize the input string
        istringstream ss(str);
        string token;
        
        // Iterate through each word in the string
        for (string token; ss >> token; ++i) {
            // If i exceeds the length of the pattern or the mapping for the current character in the pattern
            // does not match the mapping for the current word in the string, return false
            if (i == n || pat_map[pattern[i] - 'a'] != str_map[token])
                return false;
            
            // Assigning 1-based indexing for mapping characters to integers in pat_map and str_map
            pat_map[pattern[i] - 'a'] = str_map[token] = i + 1;
        }
        
        // If i equals the length of the pattern, it means all words in the string have been mapped
        // to characters in the pattern, return true; otherwise, return false
        return i == n;
    }
};
