/*
  Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
  You must not use any built-in exponent function or operator.

  For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

  Ex. Input: x = 4
      Output: 2
      Explanation: The square root of 4 is 2, so we return 2.

  Time  : O(log N)
  Space : O(1)
*/

class Solution {
public:
    int mySqrt(int x) {
        // If x is 0 or 1, the square root is x itself
        if(x == 0 || x == 1)
            return x;
        // Initialize variables for binary search: beg (beginning), mid (middle), and end (end)
        long long beg = 0, mid = 0, end = x/2;
        // Binary search loop
        while(beg <= end) {
            mid = (beg + end)/2; // Calculate the middle value
            
            // If mid^2 is less than x, check if (mid+1)^2 is greater than x
            if(mid * mid < x) {
                if((mid + 1) * (mid + 1) > x)
                    return mid; // If (mid+1)^2 is greater than x, mid is the integer square root
                beg = mid+1; // Otherwise, adjust the search range to the right
            } 
            // If mid^2 is greater than x, check if (mid-1)^2 is less than x
            else if(mid * mid > x) {
                if( (mid - 1) * (mid - 1) < x)
                    return mid-1; // If (mid-1)^2 is less than x, mid-1 is the integer square root
                end = mid - 1; // Otherwise, adjust the search range to the left
            } 
            // If mid^2 is exactly equal to x, mid is the integer square root
            else 
                return mid;
        }
        // If no exact integer square root is found, return mid (the last mid calculated in the loop)
        return mid;
    }
};
