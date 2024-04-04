/*
    Given array prices, return max profit w/ 1 buy & 1 sell
    Ex. prices = [7,1,5,3,6,4] -> 5 (buy at $1, sell at $6)

    For each, get diff b/w that & min value before, store max

    Time: O(n)
    Space: O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0; // Initialize the maximum profit to 0
        int l = 0; // Initialize the left pointer for the current buy position
        int r = 0; // Initialize the right pointer for iterating through the prices array

        // Iterate through the prices array
        while (r < prices.size()) {
            // Check if the price at the current position (r) is greater than the price at the buy position (l)
            if (prices[r] > prices[l])
                // If it's greater, update maxP with the maximum profit between the current maxP and the profit from buying at l and selling at r
                maxP = max(maxP, prices[r] - prices[l]);
            else
                // If the price at r is less than or equal to the price at l, update the buy position to r
                l = r;
            // Move the right pointer to the next position
            ++r;
        }
        // Return the maximum profit
        return maxP;
    }
};
