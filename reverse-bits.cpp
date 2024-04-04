/*
    Reverse bits of a given integer
    Ex. n = 10011100 -> 00111001 = 57

    Shift into result & shift out of n

    Time: O(1)
    Space: O(1)
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // Initialize the result variable to store the reversed bits
        uint32_t result = 0;
        // Iterate through each bit of the input integer (32 bits)
        for (int i = 0; i < 32; i++) {
            // Left shift the result to make space for the next bit
            result <<= 1;
            // Extract the least significant bit of the input integer and append it to the result
            result |= n & 1;
            // Right shift the input integer to move to the next bit
            n >>= 1;
        }
        // Return the reversed bits
        return result;
    }
};
