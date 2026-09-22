class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // initialize two pointers at the last element of both
        // arrays (similar to the teeth of a zipper)
        int i = m - 1, j = n - 1;
        // generate the sorted result (similar to the zipper slider)
        int p = nums1.size() - 1;
        // generate the result array from back to front,
        // similar to merging two sorted linked lists
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[p] = nums1[i];
                i--;
            } else {
                nums1[p] = nums2[j];
                j--;
            }
            p--;
        }
        // one of the array pointers might reach the end while the other has not finished
        // since we are placing elements into nums1, we only need
        // to consider if nums2 has remaining elements
        while (j >= 0) {
            nums1[p] = nums2[j];
            j--;
            p--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna