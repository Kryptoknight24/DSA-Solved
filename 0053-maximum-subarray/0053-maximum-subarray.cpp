class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        int maxending=nums[0];
        if(n==1){
            return nums[0];}
        else{
        for(int i=1;i<n;i++){
            maxending=max(maxending+nums[i],nums[i]);
            res=max(res,maxending);
        }
        return res;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna