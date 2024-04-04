/*
    Given large int as an array, add 1 (consider carry)
    Ex. digits = [1,2,3] -> [1,2,4]

    From right to left, keep carrying until digit < 9, add 1

    Time: O(n)
    Space: O(1)
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Iterate through the digits from right to left
        for (int i = digits.size() - 1; i >= 0; i--) {
            // If the current digit is less than 9, simply add 1 to it and return the result
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, set it to 0 and continue carrying over to the next digit
            digits[i] = 0;
        }
        // If all digits are 9, set the most significant digit to 1 and append a new digit 0
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};
