// Time complexity: O(max(n, m))
// Space complexity: O(max(n, m))
class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        // Determine the maximum length among the two input strings
        int maxLen = a.size() > b.size() ? a.size() : b.size();
        unsigned int carry = 0;
        // Traverse through each position from right to left
        for(int i = 0; i < maxLen; i++) {
            // Extract the binary digit at position i from each input string, or 0 if out of range
            unsigned int bitA = i < a.size() ? a[a.size() - i - 1] - '0' : 0;
            unsigned int bitB = i < b.size() ? b[b.size() - i - 1] - '0' : 0;
            // Calculate the sum of the current bits along with the carry
            unsigned int total = bitA + bitB + carry;
            // Compute the resulting bit and convert it to a character
            char sum = '0' + total % 2;
            // Update the carry for the next iteration
            carry = total / 2;
            // Insert the resulting bit at the beginning of the result string
            res.insert(0, 1, sum);
        }
        // If there's a carry after processing all bits, insert it as the most significant bit
        if(carry) {
            res.insert(0, 1, '1');
        }
        // Return the final result string
        return res;
    }
};
