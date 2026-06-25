class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int res=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[res-1]){
                nums[res]=nums[i];
                res++;
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna