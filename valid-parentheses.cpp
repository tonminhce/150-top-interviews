/*
    Time: O(n)
    Space: O(n)
*/

class Solution {
public:
    bool isValid(string s) {
        // Stack to store opening parentheses
        stack<char> open;
        // Mapping of closing parentheses to their corresponding opening parentheses
        unordered_map<char, char> parens = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        
        // Iterate through each character in the string
        for (const auto& c : s) {
            // If the character is a closing parenthesis
            if (parens.find(c) != parens.end()) {
                // If the stack is empty, meaning there are no corresponding opening parenthesis, return false
                if (open.empty()) {
                    return false;
                }
                // If the top of the stack does not match the corresponding opening parenthesis of the current closing parenthesis, return false
                if (open.top() != parens[c]) {
                    return false;
                }
                // Pop the matching opening parenthesis from the stack
                open.pop();
            } else {
                // If the character is an opening parenthesis, push it onto the stack
                open.push(c);
            }
        }
        
        // If the stack is empty after processing all characters, return true; otherwise, return false
        return open.empty();
    }
};
