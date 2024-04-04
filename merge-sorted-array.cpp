class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0; // Initialize an index for nums2
        int i=0; // Initialize an index for nums1

        // If nums2 is empty, no merging is required, so return
        if(n==0) return;

        // If nums1 is empty, simply copy nums2 to nums1
        if(m==0) {  
            for(int i = 0; i < n; i++){
                nums1[i] = nums2[i];
            } 
            return;
        } 

        // Merge nums1 and nums2
        while(i<m) { // Loop through nums1
            if(nums1[i]>nums2[j]) { // If the current element in nums1 is greater than the current element in nums2
                swap(nums1[i],nums2[j]); // Swap the elements
                sort(nums2.begin(),nums2.end()); // Sort nums2 to maintain its sorted order
            }
            i++; // Move to the next element in nums1
        }

        // Now nums2 elements are sorted and can be placed in nums1 after the elements of nums1
        j=0; // Reset index j for nums2
        while(i<m+n) { // Loop through the remaining positions in nums1
            nums1[i] = nums2[j]; // Copy elements from nums2 to nums1
            j++; // Move to the next element in nums2
            i++; // Move to the next position in nums1
        }
    }
};
// Time complexity: O(n * log n), where n is the size of nums2.
// Space complexity: O(1), constant space complexity.