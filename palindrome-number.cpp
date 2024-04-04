class Solution {
public:
    bool isPalindrome(int x) {
        // If the integer is negative, it cannot be a palindrome
        if(x < 0) 
            return false;
        // Initialize a variable 'div' to help extract the leftmost and rightmost digits
        long div = 1;
        // Find the appropriate divisor to reach the leftmost digit
        while(x >= 10 * div)
            div *= 10;
        // Iterate until 'x' becomes zero
        while(x) {
            // Extract the rightmost digit
            int right = x % 10;
            // Extract the leftmost digit
            int left = x / div;
            
            // If the leftmost and rightmost digits are not equal, 'x' is not a palindrome
            if(left != right) 
                return false;
            // Remove the leftmost and rightmost digits from 'x'
            x = (x % div) / 10;
            // Update the divisor for the next iteration
            div = div / 100;
        }
        // If 'x' is a palindrome, return true
        return true;
    }
};
