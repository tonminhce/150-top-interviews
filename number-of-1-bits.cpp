/*
    Return number of '1' bits in an int
    Ex. n = 00001011 -> 3

    Simply count bit-by-bit & shift it off

    Time: O(1)
    Space: O(1)
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        // Initialize a variable to store the current bit
        int bit = 0;
        // Initialize a variable to store the count of '1' bits
        int result = 0;
        // Iterate through each bit of the input integer
        while (n != 0) {
            // Extract the least significant bit of the input integer
            bit = n & 1;
            // If the current bit is '1', increment the count of '1' bits
            if (bit == 1) {
                result++;
            }
            // Right shift the input integer to move to the next bit
            n = n >> 1;
        }
        // Return the count of '1' bits
        return result;
    }
};

